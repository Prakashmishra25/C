#include <iostream>
#include <string>
using namespace std;

// 给定的输入及输出"格式字符"
string image[7] = {
    ".###.........###...###.........###...###...###...###...###...................",
    "#...#.....#.....#.....#.#...#.#.....#.........#.#...#.#...#...#..............",
    "#...#.....#.....#.....#.#...#.#.....#.........#.#...#.#...#...#..........#.#.",
    ".............###...###...###...###...###.........###...###...###...###....#..",
    "#...#.....#.#.........#.....#.....#.#...#.....#.#...#.....#...#..........#.#.",
    "#...#.....#.#.........#.....#.....#.#...#.....#.#...#.....#...#..............",
    ".###.........###...###.........###...###.........###...###..................."
};

// 将"格式字符"做简单处理，每个"格式字符"使用一个"五位整数"代替，
// "五位整数"上每个进制位的数字代表"格式字符"一列中'#'的个数，
// 这样"格式字符"在下面数组中对应"五位整数"的下标就是其真实值，
int numArr[13] = {42224,4,23332,3334,21114,23332,
    43332,1114,43334,23334,1510,1110,2120};

// 根据字符串转换成数字
// 例:  .###.    ->  1110
//      #...#    ->  1001
int str2Num(string s){
    int num = 0;
    for(int i=0,t=10000; i<5; ++i,t/=10)
        num += (s.at(i)=='#'?1:0)*t;
    return num;
}
// 将"五位整数"转换为真实数值
//   0-9 代表 数字 0-9
//   10 11 12 代表 + - *
int realNum(int num) {
    for(int i=0; i<13; ++i)
        if(numArr[i]==num)
            return i;
    return -1;
}

// 递归将真实数值转换为"格式字符"
void num2Str(string sNumArr[7], int num) {
    if(!num) return;
    // 负数标示  true 负数
    bool flag = false;
    if(num<0)
    {
        num *= -1;
        flag = true;
    }

    int curBitNum = num%10;
    num2Str(sNumArr, num/10);
    for(int i=0; i<7; i++)
        if(flag)
            sNumArr[i] = image[i].substr(11*6, 5) + "." + sNumArr[i] + "." + image[i].substr(curBitNum*6, 5);
        else
            sNumArr[i] = sNumArr[i] + "." + image[i].substr(curBitNum*6, 5);
}

int main(void) 
{
    // [1] 读取"格式字符"字符串，使用字符串数组进行存储
    string sArr[7];
    for(int i=0; i<7; ++i)
        cin >> sArr[i];

    // 计算输入的"格式字符"个数
    int count = (sArr[0].length()+1)/6;
    // flag : true  正在读取左操作数
    //        false 正在读取右操作数
    bool flag = true;
    int lNum=0, rNum=0, res=0, op=0;
    // [2] 解析"格式字符"
    for(int i=0; i<count; i++)
    {
        int curNum = 0;
        for(int j=0; j<7; ++j)
        {
            string s = sArr[j].substr(i*6, 5);
            curNum += str2Num(s);
        }
        // "五位整数"转换为真实数值
        curNum = realNum(curNum);

        if(curNum == -1) // 解析错误
            return -1;
        else if(curNum>9)// 解析符号
        {
            op = curNum;
            flag = false;
        }
        else             // 解析数字 
            if(flag)     // 解析左操作数
                lNum = lNum*10 + curNum;
            else         // 解析右操作数
                rNum = rNum*10 + curNum;
    }
    // [3] 运算求取结果
    if(op==10)
        res = lNum + rNum;
    else if(op==11)
        res = lNum - rNum;
    else if(op==12)
        res = lNum * rNum;
    else 
        return -1;

    // [4] 将运算求取结果转换为"格式字符"并输出
    string sResArr[7];
    num2Str(sResArr, res);
    for(int i=0; i<7; i++)
        cout << sResArr[i] << endl;

    return 0;
}