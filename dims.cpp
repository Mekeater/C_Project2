#include<stdio.h>
#include<string.h>
void main()
{
	//冒泡方法实现从大到小排序
	/*printf("please input the number that have six num!\n");
	int data[6];
	for(int i=0;i<6;i++)
		scanf("%d",&data[i]);
	printf("初始数据顺序如下:\n");
	for(i=0;i<6;i++)
		printf("%d ",data[i]);
	printf("\n");
	//冒泡方法
	for(i=0;i<6-1;i++)
		for(int j=0;j<6-1-i;j++)
		{
			int temp;
			if(data[j]<data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	printf("冒泡后数据的顺序如下:\n");
	for(i=0;i<6;i++)
		printf("%d ",data[i]);
	printf("\n");*/

	//利用二维数组实现如下要求：学习小组3人，没人考试3门课，求没人的平均成绩和各科平均成绩
	/*int score[3][3];
	for(int i=0;i<3;i++)
	{
		printf("请输入同学%d的三门成绩:\n",i+1);
		for(int j=0;j<3;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
	int s=0,sum[3]={0};
	float avg[3];
	printf("三位同学的三门成绩如下:\n");
	for(i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			s=s+score[i][j];
			printf("%d ",score[i][j]);
			sum[i]=sum[i]+score[j][i];
		}
		avg[i]=s/3;
		s=0;
		printf("\n");
	}
	printf("三位同学的平均分为:\n");
	for(i=0;i<3;i++)
	{
		printf("%.2f ",avg[i]);
	}
	printf("\n");
	printf("三位同学三门成绩的平均分为:\n");
	for(i=0;i<3;i++)
	{
		printf("%.2f ",sum[i]/3.0);
	}
	printf("\n");*/

	//常用的字符串处理函数(库函数string.h)
	/*puts()输出字符串
	  gets()输入字符串
	  strcmp()字符串比较
	  strcpy()字符串拷贝
	  strcat字符串连接
	  strlen()求字符串长度*/
	//键盘输入字符串str，str按原序和反序连接
	/*printf("请输入字符串\n");
	char str[26],str1[26],str2[26];
	gets(str);
	printf("字符串如下:\n");
	puts(str);
    for(int i=0,int j=0;str[i]!='\0';i++)
		str1[j++]=str[i];
	str1[j]='\0';
	for(j=0,--i;i>=0;i--)
		str2[j++]=str[i];
	str2[j]='\0';
	printf("反序字符串为:\n");
	strcat(str1,str2);
	puts(str1);
	char password[20]={"2014210523"},myps[20];
	printf("请输入用户密码\n");
	gets(myps);
	if(strcmp(myps,password)==0)
		printf("登录成功!\n");
	else
	{
		printf("请输入正确的密码!\n\n");
		printf("找回密码中...\n");
		strcpy(myps,password);
		printf("你的密码为:%s\n",myps);
	}*/

	//输入一行字符，统计其中的英文字母、数字字符、空格以及其他字符的个数
    /*char str[66];
	int i,letter,digit,space,other;
	i=letter=digit=space=other=0;
	printf("请输入字符串\n");
	gets(str);
	printf("输入的字符串为:%s\n",str);
	while(str[i]!='\0')
	{
		if((str[i]<='z'&&str[i]>='a')||(str[i]<='Z'&&str[i]>='A'))
			letter++;
		else if(str[i]<='9'&&str[i]>='0')
			digit++;
		else if(str[i]==' ')
			space++;
		else
			other++;
		i++;
	}
	printf("the letter have :%d\n",letter);
	printf("the digit have :%d\n",digit);
	printf("the space have :%d\n",space);
	printf("the other have :%d\n",other);*/

    //把一个整数插入从小到大排好序的数组中，要求新的数组仍然满足从小到大的顺序
    /*int data[11]={66,33,126,128,888,10,67,54,20,16};
	int temp=0;
	for(int i=0;i<10-1;i++)
		for(int j=0;j<10-1-i;j++)
			if(data[j]<data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
    printf("数据从大到小排序如下:\n");
	for(i=0;i<10;i++)
		printf("%d ",data[i]);
	printf("\n");
	printf("请插入一个数字\n");
	int interNum;
	scanf("%d",&interNum);
	for(i=0;i<10;i++)
	{
		if(data[i]<=interNum)
		{
			for(int s=9;s>=i;s--)
				data[s+1]=data[s];
			break;
		}
	}
	data[i]=interNum;
	printf("插入数字后的排序如下:\n");
	for(i=0;i<11;i++)
		printf("%d ",data[i]);
	printf("\n");*/

    //输入5个字符串，按照字典大小将这5个字符串从小到大排列输出
    /*char st[20],cs[5][20];
	printf("请输入5个字符串\n");
	for(int i=0;i<5;i++)
		gets(cs[i]);
	printf("输入的字符串依次为:\n");
	for(i=0;i<5;i++)
		puts(cs[i]);
	printf("\n");
	for(i=0;i<5-1;i++)
		for(int j=5-1;j>i;j--)
			if(strcmp(cs[j],cs[j-1])<0)
			{
				strcpy(st,cs[j]);
				strcpy(cs[j],cs[j+1]);
				strcpy(cs[j+1],st);
			}
	printf("照字典大小将这5个字符串从小到大排列输出:\n");
	for(i=0;i<5;i++)
	{
		puts(cs[i]);
		printf("\n");
	}*/
    //输入字符串，之后输入标识码，将指定位置的字符删除
    /*printf("请输入一行字符串\n");
	char str[100];
	gets(str);
	printf("请输入指定删除位置\n");
	int ps=0;
	scanf("%d",&ps);
	for(int i=ps;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("删除后的字符串如下:\n");
	puts(str);*/
    //输入字符串在指定的位置插入字符
    /*int ps=0,ps1=0;
    printf("请输入一行字符串\n");
	char str[100];
	gets(str);
	printf("您的原字符串如下:\n");
	puts(str);
	printf("请输入指定插入的位置\n");
	scanf("%d",&ps);
	char inter='h';
	for(int i=0;str[i]!='\0';i++)
		ps1++;
	printf("字符长度为:%d\n",ps1);
	for(int j=ps1;j>=ps;j--)
	{
		str[j+1]=str[j];
	}
	str[ps]=inter;
	printf("插入后字符串为:\n");
	puts(str);*/

}
