#include<iostream>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
using namespace std;
void A()
{
	{
		Sleep(20);
		system("color 1");
		Sleep(20);
		system("color 2");
		Sleep(20);
		system("color 3");
		Sleep(20);
		system("color 4");
		Sleep(20);
		system("color 5");
		Sleep(20);
		system("color 6");
		Sleep(20);
		system("color 7");
		Sleep(20);
	}
}

int bijiao(int a,int b)
{
	if(a == b)
		return 1;
	else 
		return 0;
}


void main()
{
	system("title=PC���򹤾���");
B:	
	int n;
	system("color 8F");system("cls");
	cout<<"\n\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  1�� �鿴����IP��ַ\t|  2�� ������Ϣ       |  3�� ���ط���\t     |  4�� �������\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  5�� �¼��鿴��\t|  6�� �豸������     |  7�� ������\t     |  8�� �����\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  9�� ע���\t\t|  10��ϵͳ�汾       |  11��ϵͳ����ʱ��    |  12��Direct��Ϣ\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  13������������\t|  14��׿Խ����ģʽ   |  15����ʱ�ػ�        |  16��ȡ����ʱ�ػ�  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|\t\t\t\t     17�������ϵ�ģʽ\t\t\t\t\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t������Ӧ����������б�����(0�˳�):";
	cin>>n;
/*
	switch(n)
	{
	case 0:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t\t!!!ллʹ��!!!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";A();system("color 2");cout<<"\t\t\t\t************��������˳�************";getch();return;}
	case 1:{system("ipconfig");break;}
	case 2:{system("systeminfo");break;}
	case 3:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ���ط������!!!\n\n\n\n\n\n";A();system("services.msc");break;}
	case 4:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ����������!!!\n\n\n\n\n\n";A();system("control");break;}
	case 5:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�¼��鿴��!!!\n\n\n\n\n\n";A();system("eventvwr");break;}
	case 6:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�豸������!!!\n\n\n\n\n\n";A();system("devmgmt.msc");break;}
	case 7:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ������!!!\n\n\n\n\n\n";A();system("calc");break;}
	case 8:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�����!!!\n\n\n\n\n\n";A();system("gpedit.msc");break;}
	case 9:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳע���!!!\n\n\n\n\n\n";A();system("regedit.exe");break;}
	case 10:{system("winver");break;}
	case 11:{system("slmgr /xpr");break;}
	case 12:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����WindowsϵͳDirect��Ϣ!!!\n\n\n\n\n\n";A();system("dxdiag");break;}
	case 15:{
		char m[]="shutdown -s -t ";
		int a;
		cout<<"\n\t\t�����������";
		cin>>a;
			if(isdigit(a)!=0)
				{
			system(strcat(m,&a));system("color FC");system("cls");
				cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!���ĵ���ϵͳ����"<<a<<"���Ӻ�ر�!!!\n\n\n\n\t\t\t\t\t!!!��ע�Ᵽ���Ѵ򿪵��ļ�!!!\n\n\n\n\n\n\n";A();}
			else
				{cout<<"\n\n\n\t\t\t\t\t!!!��������ȷ������!!!\n\n\n\n\t\t�����������";cin>>a;}
		break;}
	case 16:{system("shutdown -a");system("color FC");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!��Ϊ��ȡ���ػ��ƻ�!!!\n\n\n\n\n\n\n";A();break;}
	case 13:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�Դ������������!!!\n\n\n\n\n\n";A();system("cleanmgr");break;}
	case 14:{system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t!!!���ص�׿Խ����ģʽ�Ѵ��������ڵ�Դѡ���в鿴���л�!!!\n\n\n\n\n\n";A();break;}
	case 17:{system("md GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t!!!�ϵ�ģʽ������ɣ�����·���뱾����һ��!!!\n\n\n\t\t\t    �ļ���ͼ����������һ�£�����Ϊ��\n\n\n\n\n\n\n";A();break;}
	default:{system("cls");cout<<"\n\n\n\t\t\t\t\t!!!��������밴��������!!!\n\n\n\n\n\t";
		system("color 2");cout<<"\t\t\t  ************����������������˵�************";getch();system("test.exe");}
	}
*/
	
	if(bijiao(n,1)){system("ipconfig");}
	else if(bijiao(n,0)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t\t!!!ллʹ��!!!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";A();system("color 2");cout<<"\t\t\t\t************��������˳�************";getch();return;}
	else if(bijiao(n,2)){system("systeminfo");}
	else if(bijiao(n,3)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ���ط������!!!\n\n\n\n\n\n";A();system("services.msc");}
	else if(bijiao(n,4)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ����������!!!\n\n\n\n\n\n";A();system("control");}
	else if(bijiao(n,5)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�¼��鿴��!!!\n\n\n\n\n\n";A();system("eventvwr");}
	else if(bijiao(n,6)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�豸������!!!\n\n\n\n\n\n";A();system("devmgmt.msc");}
	else if(bijiao(n,7)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ������!!!\n\n\n\n\n\n";A();system("calc");}
	else if(bijiao(n,8)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�����!!!\n\n\n\n\n\n";A();system("gpedit.msc");}
	else if(bijiao(n,9)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳע���!!!\n\n\n\n\n\n";A();system("regedit.exe");}
	else if(bijiao(n,10)){system("winver");}
	else if(bijiao(n,11)){system("slmgr /xpr");}
	else if(bijiao(n,12)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����WindowsϵͳDirect��Ϣ!!!\n\n\n\n\n\n";A();system("dxdiag");}
	else if(bijiao(n,13)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!����Ϊ����Windowsϵͳ�Դ������������!!!\n\n\n\n\n\n";A();system("cleanmgr");}
	else if(bijiao(n,14)){system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");system("cls");cout<<"\n\n\n\n\n\n\t\t\t!!!���ص�׿Խ����ģʽ�Ѵ��������ڵ�Դѡ���в鿴���л�!!!\n\n\n\n\n\n";A();}
	else if(bijiao(n,15)){char m[]="shutdown -s -t ";char a[9];cout<<"\n\t\t����������";cin>>a;int k=0;for(int i=0;i<strlen(a);i++)if(a[i]>='0'&&a[i]<='9')k++;if(k==0)
		{cout<<"\n\n\n\t\t\t\t\t!!!��������ȷ������!!!\n\n\n\n\t\t����������";cin>>a;}system(strcat(m,a));
		system("color FC");system("cls");cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!���ĵ���ϵͳ����"<<a<<"���ر�!!!\n\n\n\n\t\t\t\t\t!!!��ע�Ᵽ���Ѵ򿪵��ļ�!!!\n\n\n\n\n\n\n";A();}
	else if(bijiao(n,16)){system("shutdown -a");system("color FC");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!��Ϊ��ȡ���ػ��ƻ�!!!\n\n\n\n\n\n\n";A();}
	else if(bijiao(n,17)){system("md GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t!!!�ϵ�ģʽ������ɣ�����·���뱾����һ��!!!\n\n\n\t\t\t    �ļ���ͼ����������һ�£�����Ϊ��\n\n\n\n\n\n\n";A();}
	else
		{system("cls");cout<<"\n\n\n\t\t\t\t\t!!!��������밴��������!!!\n\n\n\n\n\t";
		system("color 2");cout<<"\t\t\t  ************��������������˵�************";getch();goto B;}

	system("color 8F");
	cout<<"\n\n\n\n\n\t\t\t**************����������������˵�**************";
	getch();
	goto B;
}
