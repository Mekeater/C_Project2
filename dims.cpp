#include<stdio.h>
#include<string.h>
void main()
{
	//ð�ݷ���ʵ�ִӴ�С����
	/*printf("please input the number that have six num!\n");
	int data[6];
	for(int i=0;i<6;i++)
		scanf("%d",&data[i]);
	printf("��ʼ����˳������:\n");
	for(i=0;i<6;i++)
		printf("%d ",data[i]);
	printf("\n");
	//ð�ݷ���
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
	printf("ð�ݺ����ݵ�˳������:\n");
	for(i=0;i<6;i++)
		printf("%d ",data[i]);
	printf("\n");*/

	//���ö�ά����ʵ������Ҫ��ѧϰС��3�ˣ�û�˿���3�ſΣ���û�˵�ƽ���ɼ��͸���ƽ���ɼ�
	/*int score[3][3];
	for(int i=0;i<3;i++)
	{
		printf("������ͬѧ%d�����ųɼ�:\n",i+1);
		for(int j=0;j<3;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
	int s=0,sum[3]={0};
	float avg[3];
	printf("��λͬѧ�����ųɼ�����:\n");
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
	printf("��λͬѧ��ƽ����Ϊ:\n");
	for(i=0;i<3;i++)
	{
		printf("%.2f ",avg[i]);
	}
	printf("\n");
	printf("��λͬѧ���ųɼ���ƽ����Ϊ:\n");
	for(i=0;i<3;i++)
	{
		printf("%.2f ",sum[i]/3.0);
	}
	printf("\n");*/

	//���õ��ַ���������(�⺯��string.h)
	/*puts()����ַ���
	  gets()�����ַ���
	  strcmp()�ַ����Ƚ�
	  strcpy()�ַ�������
	  strcat�ַ�������
	  strlen()���ַ�������*/
	//���������ַ���str��str��ԭ��ͷ�������
	/*printf("�������ַ���\n");
	char str[26],str1[26],str2[26];
	gets(str);
	printf("�ַ�������:\n");
	puts(str);
    for(int i=0,int j=0;str[i]!='\0';i++)
		str1[j++]=str[i];
	str1[j]='\0';
	for(j=0,--i;i>=0;i--)
		str2[j++]=str[i];
	str2[j]='\0';
	printf("�����ַ���Ϊ:\n");
	strcat(str1,str2);
	puts(str1);
	char password[20]={"2014210523"},myps[20];
	printf("�������û�����\n");
	gets(myps);
	if(strcmp(myps,password)==0)
		printf("��¼�ɹ�!\n");
	else
	{
		printf("��������ȷ������!\n\n");
		printf("�һ�������...\n");
		strcpy(myps,password);
		printf("�������Ϊ:%s\n",myps);
	}*/

	//����һ���ַ���ͳ�����е�Ӣ����ĸ�������ַ����ո��Լ������ַ��ĸ���
    /*char str[66];
	int i,letter,digit,space,other;
	i=letter=digit=space=other=0;
	printf("�������ַ���\n");
	gets(str);
	printf("������ַ���Ϊ:%s\n",str);
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

    //��һ�����������С�����ź���������У�Ҫ���µ�������Ȼ�����С�����˳��
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
    printf("���ݴӴ�С��������:\n");
	for(i=0;i<10;i++)
		printf("%d ",data[i]);
	printf("\n");
	printf("�����һ������\n");
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
	printf("�������ֺ����������:\n");
	for(i=0;i<11;i++)
		printf("%d ",data[i]);
	printf("\n");*/

    //����5���ַ����������ֵ��С����5���ַ�����С�����������
    /*char st[20],cs[5][20];
	printf("������5���ַ���\n");
	for(int i=0;i<5;i++)
		gets(cs[i]);
	printf("������ַ�������Ϊ:\n");
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
	printf("���ֵ��С����5���ַ�����С�����������:\n");
	for(i=0;i<5;i++)
	{
		puts(cs[i]);
		printf("\n");
	}*/
    //�����ַ�����֮�������ʶ�룬��ָ��λ�õ��ַ�ɾ��
    /*printf("������һ���ַ���\n");
	char str[100];
	gets(str);
	printf("������ָ��ɾ��λ��\n");
	int ps=0;
	scanf("%d",&ps);
	for(int i=ps;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("ɾ������ַ�������:\n");
	puts(str);*/
    //�����ַ�����ָ����λ�ò����ַ�
    /*int ps=0,ps1=0;
    printf("������һ���ַ���\n");
	char str[100];
	gets(str);
	printf("����ԭ�ַ�������:\n");
	puts(str);
	printf("������ָ�������λ��\n");
	scanf("%d",&ps);
	char inter='h';
	for(int i=0;str[i]!='\0';i++)
		ps1++;
	printf("�ַ�����Ϊ:%d\n",ps1);
	for(int j=ps1;j>=ps;j--)
	{
		str[j+1]=str[j];
	}
	str[ps]=inter;
	printf("������ַ���Ϊ:\n");
	puts(str);*/

}
