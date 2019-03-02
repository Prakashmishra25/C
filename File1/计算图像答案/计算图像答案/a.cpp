#include <iostream>
#include <string>
using namespace std;

// ���������뼰���"��ʽ�ַ�"
string image[7] = {
    ".###.........###...###.........###...###...###...###...###...................",
    "#...#.....#.....#.....#.#...#.#.....#.........#.#...#.#...#...#..............",
    "#...#.....#.....#.....#.#...#.#.....#.........#.#...#.#...#...#..........#.#.",
    ".............###...###...###...###...###.........###...###...###...###....#..",
    "#...#.....#.#.........#.....#.....#.#...#.....#.#...#.....#...#..........#.#.",
    "#...#.....#.#.........#.....#.....#.#...#.....#.#...#.....#...#..............",
    ".###.........###...###.........###...###.........###...###..................."
};

// ��"��ʽ�ַ�"���򵥴���ÿ��"��ʽ�ַ�"ʹ��һ��"��λ����"���棬
// "��λ����"��ÿ������λ�����ִ���"��ʽ�ַ�"һ����'#'�ĸ�����
// ����"��ʽ�ַ�"�����������ж�Ӧ"��λ����"���±��������ʵֵ��
int numArr[13] = {42224,4,23332,3334,21114,23332,
    43332,1114,43334,23334,1510,1110,2120};

// �����ַ���ת��������
// ��:  .###.    ->  1110
//      #...#    ->  1001
int str2Num(string s){
    int num = 0;
    for(int i=0,t=10000; i<5; ++i,t/=10)
        num += (s.at(i)=='#'?1:0)*t;
    return num;
}
// ��"��λ����"ת��Ϊ��ʵ��ֵ
//   0-9 ���� ���� 0-9
//   10 11 12 ���� + - *
int realNum(int num) {
    for(int i=0; i<13; ++i)
        if(numArr[i]==num)
            return i;
    return -1;
}

// �ݹ齫��ʵ��ֵת��Ϊ"��ʽ�ַ�"
void num2Str(string sNumArr[7], int num) {
    if(!num) return;
    // ������ʾ  true ����
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
    // [1] ��ȡ"��ʽ�ַ�"�ַ�����ʹ���ַ���������д洢
    string sArr[7];
    for(int i=0; i<7; ++i)
        cin >> sArr[i];

    // ���������"��ʽ�ַ�"����
    int count = (sArr[0].length()+1)/6;
    // flag : true  ���ڶ�ȡ�������
    //        false ���ڶ�ȡ�Ҳ�����
    bool flag = true;
    int lNum=0, rNum=0, res=0, op=0;
    // [2] ����"��ʽ�ַ�"
    for(int i=0; i<count; i++)
    {
        int curNum = 0;
        for(int j=0; j<7; ++j)
        {
            string s = sArr[j].substr(i*6, 5);
            curNum += str2Num(s);
        }
        // "��λ����"ת��Ϊ��ʵ��ֵ
        curNum = realNum(curNum);

        if(curNum == -1) // ��������
            return -1;
        else if(curNum>9)// ��������
        {
            op = curNum;
            flag = false;
        }
        else             // �������� 
            if(flag)     // �����������
                lNum = lNum*10 + curNum;
            else         // �����Ҳ�����
                rNum = rNum*10 + curNum;
    }
    // [3] ������ȡ���
    if(op==10)
        res = lNum + rNum;
    else if(op==11)
        res = lNum - rNum;
    else if(op==12)
        res = lNum * rNum;
    else 
        return -1;

    // [4] ��������ȡ���ת��Ϊ"��ʽ�ַ�"�����
    string sResArr[7];
    num2Str(sResArr, res);
    for(int i=0; i<7; i++)
        cout << sResArr[i] << endl;

    return 0;
}