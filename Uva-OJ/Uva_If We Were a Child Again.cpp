#include<stdio.h>
#include<math.h>
#include<string.h>

#define clr(a) (memset(a,'0',sizeof(a)))

class big_integer
{
public:
	char num[2000];
	big_integer operator + (big_integer);
	big_integer operator - (big_integer);
	big_integer operator * (big_integer);
	big_integer operator / (big_integer);
	big_integer operator % (big_integer);
	void multiply(char num1[], char num2[], int digit);

	big_integer()
	{
		strcpy(num,"");
	}
	big_integer(char num1[])
	{
		strcpy(num,num1);
	}
	friend int operator == (big_integer S, big_integer L);
	friend int operator < (big_integer S, big_integer L);
	friend int operator <= (big_integer S, big_integer L);
	friend int operator > (big_integer S, big_integer L);
};

void swap(char num1[], char num2[])
{
	char temp[2000];
	strcpy(temp,num1);
	strcpy(num1,num2);
	strcpy(num2,temp);
}
int operator == (big_integer S,big_integer L)
{
	int len1 = strlen(S.num);
	int len2 = strlen(L.num);
	if(len1 == len2&&!strcmp(S.num,L.num))
		return 1;
	else return 0;
}

int operator <= (big_integer S,big_integer L)
{
	int len1 = strlen(S.num);
	int len2 = strlen(L.num);
	if(len1 == len2&&strcmp(S.num,L.num) <= 0)
		return 1;
	else return 0;
}

int operator<(big_integer S, big_integer L)
{
	int fl = 0;
	int len1 = strlen(S.num);
	int len2 = strlen(L.num);
	if(len1 < len2)
		return 1;
	if((len1 == len2 && strcmp(S.num, L.num) < 0))
	{
		return 1;
	}
	else return 0;
}

int operator > (big_integer S, big_integer L)
{

	if(strcmp(S.num, L.num) > 0)
	{
		return 1;
	}
	else return 0;
}
big_integer big_integer ::operator +(big_integer L)
{
	big_integer S,s1,s2,zero;
	int len1,len2,len3,K,carry,I,J,p,q,fl=0,L1;
	int sign1=0,sign2=0,sign_neg=0;

	len1 = strlen(num);
	len2 = strlen(L.num);
	if(num[0]=='-')
	{
		sign1=1;
		num[0]='0';
	}
	else if(num[0]!='0')
	{
		for(I=len1-1;I>=0;I--)
			num[I+1]=num[I];
		num[0]='0';
		len1++;
		num[len1]=NULL;
	}

	if(L.num[0]=='-')
	{
		sign2=1;
		L.num[0]='0';
	}
	else if(L.num[0]!='0')
	{
		for(I=len2-1;I>=0;I--)
			L.num[I+1]=L.num[I];
		L.num[0]='0';
		len2++;
		L.num[len2]=NULL;
	}

	if(sign1==1&&sign2==1)
	{
		sign_neg=1;
	}
	else if(sign1==0&&sign2==1)
	{
		S=num;
		S=S- L;
		return S;
	}
	else if(sign1==1&&sign2==0)
	{
		s1=num;
		S=L-s1;
		return S;
	}

	if(num<L)
	{
		len3=len2;
		swap(num,L.num);
		len2=len1;
		len1=len3;
		fl=1;
	}
	else
	{
		len3=len1;
	}

	carry=0;
	for(I=len3-1,J=len2-1;I>=0||J>=0;I--,J--)
	{
		p=num[I]-'0';
		if(J<0)
			q=0;
		else q=L.num[J]-'0';
		S.num[len3--]=(p+q+carry)%10+'0';
		carry=(p+q+carry)/10;
	}

	S.num[0]=carry+'0';
	S.num[len1+1]=NULL;

	I=0;
	K=0;
	if(sign_neg==1)
	{
		S.num[0]='-';
		K=1;
		I++;
	}

	while(S.num[I]=='0')I++;


	for(L1=I;L1<=len1;L1++)
	{
		S.num[K++]=S.num[L1];
	}
	S.num[K]=NULL;
	if(S==""||S=="-")
		S="0";

return S;
}


big_integer big_integer ::operator -( big_integer L)
{
	big_integer S,s1;
	int len1,len2,i,j,bor,c,K,I,L1,fl_small=0,sign1=0,sign2=0,fl=0,len3;
	bor=0;
	len1 = strlen(num);
	len2 = strlen(L.num);
	if(num[0]=='-')
	{
		sign1=1;
		num[0]='0';
	}
	else if(num[0]!='0')
	{
		for(I=len1-1;I>=0;I--)
			num[I+1]=num[I];
		num[0]='0';
		len1++;
		num[len1]=NULL;
	}

	if(L.num[0]=='-')
	{
		sign2=1;
		L.num[0]='0';
	}
	else if(L.num[0]!='0')
	{
		for(I=len2-1;I>=0;I--)
			L.num[I+1]=L.num[I];
		L.num[0]='0';
		len2++;
		L.num[len2]=NULL;
	}

	if(sign1==1&&sign2==1)
	{
		fl_small=-1;
	}
	else if(sign1==0&&sign2==1)
	{
		S=num;
		S=S+L;
		return S;
	}
	else if(sign1==1&&sign2==0)
	{
		s1=num;
		s1=s1+L;
		S="-";
		strcat(S.num,s1.num);
		return S;
	}

	if(num<L)
	{
		len3=len2;
		swap(num,L.num);
		len2=len1;
		len1=len3;
		fl_small++;
		fl=1;
	}

	i=len1-1;
	j=len2-1;
	do
	{
		if(i<0)
			break;
		else
		{
			if(j<0)
				c=0;
			else c=L.num[j]-'0';
		}

		if(num[i]-'0'<c+bor)
		{
			S.num[i]=num[i]+10-(c+bor);
			bor=1;
		}
		else
		{
			S.num[i]=num[i]-(c+bor);
			bor=0;
		}

		j--;
		i--;

	}while(num);

	I=1;
	while(S.num[I]=='0')I++;
	K=0;
	if(fl_small!=0)
	{
		S.num[0]='-';
		K=1;
	}
	for(L1=I;L1<len1;L1++)
	{
		S.num[K++]=S.num[L1];
	}
	S.num[K]=NULL;
	if(S==""||S=="-")
		S="0";
return S;
}


void big_integer::multiply (char num1[] ,char num2[] , int digit)
{
	int I, len, len1, carry = 0 , mul_instant=0;
	if(digit==10)
	{
		strcpy(num2,num1);
		strcat(num2,"0");
		return ;
	}
	len1=len = strlen (num1);

	num2 [len + 1] = NULL;

	for(I=len-1 ;I>=0 ; I--)
	{
		mul_instant = (num1 [I]-'0') * digit ;
		num2 [len1--] = ( mul_instant + carry)%10 + '0' ;
		carry = (mul_instant+carry) / 10;
	}
    if(carry==0)
	{
		for(I=1;I<=len;I++)
			num2[I-1]=num2[I];
		num2[len]=NULL;
	}
	else num2[0] = carry + '0';

}

big_integer big_integer ::operator /(big_integer L)
{
	big_integer S,s1,s2,s3;
	int I,J=1,len_mod,K,L1,sign1=0,sign2=0;
	char temp[2];
	if(!strcmp(num,"0"))
		return num;
	if(num[0]=='-')
	{
		sign1=1;
		for(I=1;num[I];I++)
			num[I-1]=num[I];
		num[I-1]=NULL;
	}

	if(L.num[0]=='-')
	{
		sign2=1;
		for(I=1;L.num[I];I++)
			L.num[I-1]=L.num[I];
		L.num[I-1]=NULL;
	}

	I=0;
	K=0;
	while(num[I]=='0')I++;
	for(L1=I;num[L1];L1++)
	{
		num[K++]=num[L1];
	}
	num[K]=NULL;

	I=0;
	K=0;
	while(L.num[I]=='0')I++;
	for(L1=I;L.num[L1];L1++)
	{
		L.num[K++]=L.num[L1];
	}
	L.num[K]=NULL;

	int len_divisor=strlen(L.num);
	s2="";
	for(I=0;num[I];I++)
	{
		temp[0]=num[I]; temp[1]=NULL;
		if(s2=="0")
			s2="";

		strcat(s2.num,temp);
		len_mod = strlen(s2.num);

		if(len_mod<len_divisor)
			S.num[J++]='0';
		else if(s2<=L)
		{
			if(s2==L)
			{
				s2="";
				S.num[J++]='1';

			}
			else S.num[J++]='0';
		}

		else
		{
			K=2;
			s3=L;
			while(K<=10)
			{
				multiply (L.num,s1.num,K);
				if(strlen(s1.num)>strlen(s2.num))
				{
					S.num[J++]=K-1+'0';
					s2=s2-s3;
					break;
				}
				else if(s2<=s1)
				{
					if(s2==s1)
					{
						S.num[J++]=K+'0';
						s2="";
						break;
					}
					else
					{
						S.num[J++]=K-1+'0';
						s2=s2-s3;
						break;
					}
				}
				else
				{
					s3=s1;
				}
				K++;
			}

		}
	}
	I=1;
	while(S.num[I]=='0')I++;
	K=0;
	if((sign1==1&&sign2==0)||(sign1==0&&sign2==1))
	{
		S.num[0]='-';
		K=1;
	}
	for(L1=I;L1<J;L1++)
		S.num[K++]=S.num[L1];
	S.num[K]=NULL;

	if(S==""||S=="-")
		S="0";
return S;
}


big_integer big_integer::operator * (big_integer L)
{
	big_integer S;
	int I,j,carry,index,i,x=0,K,sign=0,L1;
	clr(S.num);
	int len1 = strlen(num);
	int len2 = strlen(L.num);
	if(num[0]=='-')
	{
		sign++;
		num[0]='0';
	}
	else if(num[0]!='0')
	{
		for(I=len1-1;I>=0;I--)
			num[I+1]=num[I];
		num[0]='0';
		len1++;
		num[len1]=NULL;
	}

	if(L.num[0]=='-')
	{
		sign++;
		L.num[0]='0';
	}
	else if(L.num[0]!='0')
	{
		for(I=len2-1;I>=0;I--)
			L.num[I+1]=L.num[I];
		L.num[0]='0';
		len2++;
		L.num[len2]=NULL;
	}
	for(j=len2-1;j>=0;j--)
	{
		carry=0;
		index=len1+len2-1;
		for(i=len1-1;i>=0;i--)
		{
			x=((L.num[j]-'0')*(num[i]-'0')+carry)+S.num[i+j+1]-'0';
			S.num[i+j+1]=x%10+'0';
			carry=x/10;
		}
		S.num[i+j+1]=carry+'0';
	}

	I=1;
	while(S.num[I]=='0'&&I<len1+len2)I++;
	K=0;
	if(sign==1)
	{
		S.num[0]='-';
		K=1;
	}
	for(L1=I;L1<len1+len2;L1++)
	{
		S.num[K++]=S.num[L1];

	}
	S.num[K]=NULL;
	if(S==""||S=="-")
		S="0";

return S;
}

big_integer big_integer ::operator %(big_integer L)
{
	big_integer S,s1,s2,s3;
	int I,J=1,len_mod,fl,K,L1,sign1=0,sign2=0;
	char temp[2];

	if(!strcmp(num,"0"))
		return num;


	if(num[0]=='-')
	{
		sign1=1;
		for(I=1;num[I];I++)
			num[I-1]=num[I];
		num[I-1]=NULL;
	}

	if(L.num[0]=='-')
	{
		sign2=1;
		for(I=1;L.num[I];I++)
			L.num[I-1]=L.num[I];
		L.num[I-1]=NULL;
	}

	I=0;
	K=0;
	while(num[I]=='0')I++;
	for(L1=I;num[L1];L1++)
	{
		num[K++]=num[L1];
	}
	num[K]=NULL;

	I=0;
	K=0;
	while(L.num[I]=='0')I++;
	for(L1=I;L.num[L1];L1++)
	{
		L.num[K++]=L.num[L1];
	}
	L.num[K]=NULL;

	int len_divisor=strlen(L.num);
	strcpy(s2.num,"");
	for(I=0;num[I];I++)
	{
		temp[0]=num[I]; temp[1]=NULL;
		if(!strcmp(s2.num,"0"))
			strcpy(s2.num,"");
		strcat(s2.num,temp);
		len_mod = strlen(s2.num);

		if(len_mod<len_divisor)			;
		else if(len_mod==len_divisor&&strcmp(s2.num,L.num)<=0)
		{
			fl=strcmp(s2.num,L.num);
			if(fl==0)
			{
				strcpy(s2.num,"");
			}
		}

		else
		{
			K=2;
			strcpy(s3.num,L.num);
			while(K<=10)
			{
				multiply (L.num,s1.num,K);
				if(strlen(s1.num)>strlen(s2.num))
				{
					s2=s2-s3;
					break;
				}
				else if(s2<=s1)
				{
					if(s1==s2)
					{
						s2="";
						break;
					}
					else
					{
						s2=s2-s3;
						break;
					}
				}
				else
				{
					s3=s1;
				}
				K++;
			}

		}
	}
	if(s2=="")
		s2="0";
	else if(sign1==1 && strcmp(s2.num,"0"))
	{
			s2=L-s2;
	}
    return s2;
}

int main()
{
	big_integer X,Y,Z;
	char op;
	int count=1;
	while(scanf("%s%*c%c%*c%s",X.num,&op,Y.num)==3)
    {
        if(op=='/')
		{
			Z=X/Y;
			printf("%s\n",Z.num);
		}
		else if(op=='%')
		{
			Z=X%Y;
			printf("%s\n",Z.num);
		}
	}
    return 0;
}

