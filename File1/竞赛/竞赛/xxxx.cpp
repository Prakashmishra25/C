Status T(TSmatrx M,TSmastrx &T)
{
	T.mu=M.nu;T.nu=M.mu;T.tu=M.tu;
	if(T.tu)
	{
		q=1;
		for(col=1;col<=M.nu;++col)
		{
			for(p=1;p<=M.tu;++p)
			{
				T.data[q].i=M.data[p].j;
				T.data[q].j=M.data[p].i;
				T.data[q].e=M.data[p].e;
			}
		}
	}
}
//¿ìËÙ×ªÖÃ
Status FasttransposeSMatrix(TSMatrix M,TSMatrix &T)
{
	T.mu=M.nu;T.nu=M.mu;T.tu=M.tu;
	if(T.tu)
	{
		for(col=1;col<=M.nu;++col) num[col]=0;
		for(t=1;t<=M.tu;++t) ++num[M.data[t].j];
		cpot[1]=1;
		for(col=2;col<=M.nu;++col)
		{
			cpot[col]=cpot[col-1]+num[col-1]; 
		}
		for(p=1;p<=M.tu;++p)
		{
			col=M.data[p].j;
			q=cpot[col];
			T.data[q].i=M.data[p].j;
			T.dara[q].e=M.data[p].e;
			T.data[q].j=M.data[p].i;
			++cpot[col];
		}

	}
}