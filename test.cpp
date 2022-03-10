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
	system("title=PC精简工具箱");
B:	
	int n;
	system("color 8F");system("cls");
	cout<<"\n\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  1、 查看本机IP地址\t|  2、 本机信息       |  3、 本地服务\t     |  4、 控制面板\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  5、 事件查看器\t|  6、 设备管理器     |  7、 计算器\t     |  8、 组策略\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  9、 注册表\t\t|  10、系统版本       |  11、系统激活时限    |  12、Direct信息\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|  13、磁盘清理工具\t|  14、卓越性能模式   |  15、定时关机        |  16、取消定时关机  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t\t|\t\t\t\t     17、创建上帝模式\t\t\t\t\t  |\n";
	cout<<"\t\t*-----------------------*---------------------*----------------------*--------------------*\n";
	cout<<"\t输入相应的序号以运行本程序(0退出):";
	cin>>n;
/*
	switch(n)
	{
	case 0:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t\t!!!谢谢使用!!!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";A();system("color 2");cout<<"\t\t\t\t************按任意键退出************";getch();return;}
	case 1:{system("ipconfig");break;}
	case 2:{system("systeminfo");break;}
	case 3:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统本地服务程序!!!\n\n\n\n\n\n";A();system("services.msc");break;}
	case 4:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统控制面板程序!!!\n\n\n\n\n\n";A();system("control");break;}
	case 5:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统事件查看器!!!\n\n\n\n\n\n";A();system("eventvwr");break;}
	case 6:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统设备管理器!!!\n\n\n\n\n\n";A();system("devmgmt.msc");break;}
	case 7:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统计算器!!!\n\n\n\n\n\n";A();system("calc");break;}
	case 8:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统组策略!!!\n\n\n\n\n\n";A();system("gpedit.msc");break;}
	case 9:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统注册表!!!\n\n\n\n\n\n";A();system("regedit.exe");break;}
	case 10:{system("winver");break;}
	case 11:{system("slmgr /xpr");break;}
	case 12:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统Direct信息!!!\n\n\n\n\n\n";A();system("dxdiag");break;}
	case 15:{
		char m[]="shutdown -s -t ";
		int a;
		cout<<"\n\t\t输入分钟数：";
		cin>>a;
			if(isdigit(a)!=0)
				{
			system(strcat(m,&a));system("color FC");system("cls");
				cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!您的电脑系统将在"<<a<<"分钟后关闭!!!\n\n\n\n\t\t\t\t\t!!!请注意保存已打开的文件!!!\n\n\n\n\n\n\n";A();}
			else
				{cout<<"\n\n\n\t\t\t\t\t!!!请输入正确的数据!!!\n\n\n\n\t\t输入分钟数：";cin>>a;}
		break;}
	case 16:{system("shutdown -a");system("color FC");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!已为您取消关机计划!!!\n\n\n\n\n\n\n";A();break;}
	case 13:{system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统自带磁盘清理程序!!!\n\n\n\n\n\n";A();system("cleanmgr");break;}
	case 14:{system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t!!!隐藏的卓越性能模式已创建，请在电源选项中查看并切换!!!\n\n\n\n\n\n";A();break;}
	case 17:{system("md GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t!!!上帝模式创建完成，保存路径与本程序一致!!!\n\n\n\t\t\t    文件的图标与控制面板一致，名称为空\n\n\n\n\n\n\n";A();break;}
	default:{system("cls");cout<<"\n\n\n\t\t\t\t\t!!!输入错误，请按规则输入!!!\n\n\n\n\n\t";
		system("color 2");cout<<"\t\t\t  ************按任意键返回至主菜单************";getch();system("test.exe");}
	}
*/
	
	if(bijiao(n,1)){system("ipconfig");}
	else if(bijiao(n,0)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t\t!!!谢谢使用!!!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";A();system("color 2");cout<<"\t\t\t\t************按任意键退出************";getch();return;}
	else if(bijiao(n,2)){system("systeminfo");}
	else if(bijiao(n,3)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统本地服务程序!!!\n\n\n\n\n\n";A();system("services.msc");}
	else if(bijiao(n,4)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统控制面板程序!!!\n\n\n\n\n\n";A();system("control");}
	else if(bijiao(n,5)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统事件查看器!!!\n\n\n\n\n\n";A();system("eventvwr");}
	else if(bijiao(n,6)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统设备管理器!!!\n\n\n\n\n\n";A();system("devmgmt.msc");}
	else if(bijiao(n,7)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统计算器!!!\n\n\n\n\n\n";A();system("calc");}
	else if(bijiao(n,8)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统组策略!!!\n\n\n\n\n\n";A();system("gpedit.msc");}
	else if(bijiao(n,9)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统注册表!!!\n\n\n\n\n\n";A();system("regedit.exe");}
	else if(bijiao(n,10)){system("winver");}
	else if(bijiao(n,11)){system("slmgr /xpr");}
	else if(bijiao(n,12)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统Direct信息!!!\n\n\n\n\n\n";A();system("dxdiag");}
	else if(bijiao(n,13)){system("cls");cout<<"\n\n\n\n\n\t\t\t\t!!!正在为您打开Windows系统自带磁盘清理程序!!!\n\n\n\n\n\n";A();system("cleanmgr");}
	else if(bijiao(n,14)){system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");system("cls");cout<<"\n\n\n\n\n\n\t\t\t!!!隐藏的卓越性能模式已创建，请在电源选项中查看并切换!!!\n\n\n\n\n\n";A();}
	else if(bijiao(n,15)){char m[]="shutdown -s -t ";char a[9];cout<<"\n\t\t输入秒数：";cin>>a;int k=0;for(int i=0;i<strlen(a);i++)if(a[i]>='0'&&a[i]<='9')k++;if(k==0)
		{cout<<"\n\n\n\t\t\t\t\t!!!请输入正确的数据!!!\n\n\n\n\t\t输入秒数：";cin>>a;}system(strcat(m,a));
		system("color FC");system("cls");cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!您的电脑系统将在"<<a<<"秒后关闭!!!\n\n\n\n\t\t\t\t\t!!!请注意保存已打开的文件!!!\n\n\n\n\n\n\n";A();}
	else if(bijiao(n,16)){system("shutdown -a");system("color FC");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t\t\t!!!已为您取消关机计划!!!\n\n\n\n\n\n\n";A();}
	else if(bijiao(n,17)){system("md GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}");system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t!!!上帝模式创建完成，保存路径与本程序一致!!!\n\n\n\t\t\t    文件的图标与控制面板一致，名称为空\n\n\n\n\n\n\n";A();}
	else
		{system("cls");cout<<"\n\n\n\t\t\t\t\t!!!输入错误，请按规则输入!!!\n\n\n\n\n\t";
		system("color 2");cout<<"\t\t\t  ************按任意键返回主菜单************";getch();goto B;}

	system("color 8F");
	cout<<"\n\n\n\n\n\t\t\t**************按任意键返回至主菜单**************";
	getch();
	goto B;
}
