/*
    Jvav Programmer Ver.02w05c Snapshot
    By 30266
    Compilation time 2020-04-15 20:32:23
*/
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    /*Load*/
    {
        cout << "Getting a list of files...\n";
        Sleep(150);
        cout << "Detecting file integrity...\n";
        Sleep(2000);
        cout << "Error! There are 15 files that go wrong! Re-downloading.\n";
        cout << "Downloading file (1/15)...\nCL.command.1.tlog\n";
        Sleep(120);
        cout << "Downloading file (2/15)...\nCL.read.1.tlog\n";
        Sleep(9110);
        cout << "Downloading file (3/15)...\nCL.write.1.tlog\n";
        Sleep(130);
        cout << "Downloading file (4/15)...\nJvav.lastbuildstate\n";
        Sleep(130);
        cout << "Downloading file (5/15)...\nlink.command.1.tlog\n";
        Sleep(230);
        cout << "Downloading file (6/15)...\nlink.read.1.tlog\n";
        Sleep(2930);
        cout << "Downloading file (7/15)...\nlink.write.1.tlog\n";
        Sleep(150);
        cout << "Downloading file (8/15)...\nJvav.ilk\n";
        Sleep(7820);
        cout << "Downloading file (9/15)...\nJvav.txt\n";
        Sleep(130);
        cout << "Downloading file (10/15)...\nJvav.zip\n";
        Sleep(5910);
        cout << "Downloading file (11/15)...\nJvav.pdb\n";
        Sleep(6110);
        cout << "Downloading file (12/15)...\nvc142.idb\n";
        Sleep(1030);
        cout << "Downloading file (13/15)...\nvc142.pdb\n";
        Sleep(2500);
        cout << "Downloading file (14/15)...\nonline upgrades.service\n";
        Sleep(1500);
        cout << "Downloading file (15/15)...\nlanguage pack.pack\n";
        Sleep(1200);
        cout << "Verifying downloaded files...\n";
        Sleep(120);
        cout << "Registered and profile...\n";
        Sleep(1500);
        cout << "Loading file...\n";
        Sleep(5000);
        system("cls");
    }
    /*en_main*/
    string command, type, inputcharacter;
    cout << "--------------------------------------------\n";
    cout << "| Jvav Programm         Ver.02w05cSnapshot |\n";
    cout << "| By Dr.ZhangHaoYang      Programmer 30266 |\n";
    cout << "| Enter'help'to get help!                  |\n";
    cout << "| Chinese Simplified is now supported!     |\n";
    cout << "--------------------------------------------\n";
main:
    cout << "Jvav>";
    cin >> command;
    if (command == "help") {
        cout << "----Jvav help------Page(1/1)---\n";
        cout << "  help [page]:Get help\n  leave:Exit Jvav\n  output:Output characters\n  input:Input characters\n  upgrade:Detect upgrades and updates online\n  language:setting the program language\n  info:Jvav information\n";
        cout << "----Jvav help------Page(1/1)---\n";
        goto main;
    }
    else if (command == "leave") {
        cout << "Are you sure to leave jvav?(y/n)";
        string L;
        cin >> L;
        if (L == "y") {
            return 0;
        }
        else {
            goto main;
        }
    }
    else if (command == "output") {
        cout << "Jvav>output>";
        cin >> type;
        cout << type << endl;
        goto main;
    }
    else if (command == "info") {
        cout << "Jvav Programm Ver.02w05c\nIt's just a joke, but we still make it, and the joke was first brought by Zhang Haoyang.\nThe person writing the program is 30266.\nThis version fixes translation errors and adds the info feature.\nCompilation was completed on April 15, 2020, 20:32.\n";
        goto main;
    }
    else if (command == "input") {
        cout << "Jvav>input>";
        cin >> inputcharacter;
        goto main;
    }
    else if (command == "upgrade") {
        cout << "Jvav>upgrade>Detecting updates online...\n";
        Sleep(5000);
        cout << "Jvav>upgrade>Error! The update failed! Because the version list cannot be obtained on the authentication server!\n";
        goto main;
    }
    else if (command == "language") {
        cout << "Please enter the setting language(English/简体中文):";
        string language;
        cin >> language;
        if (language == "English") {
            goto main;
        }
        else if (language == "简体中文") {
            system("cls");
            goto ch;
        }
        else {
            cout << "Unknown language.\n";
            goto main;
        }
    }
    else {
        cout << "Unknown command\n";
        goto main;
    }

    /*cn_main*/
ch:
    cout << "--------------------------------------------\n";
    cout << "| Jvav编译器            版本号：02f05c快照 |\n";
    cout << "| 作者：张浩洋大师           编译员：30266 |\n";
    cout << "| 通过输入'帮助'来获得帮助                 |\n";
    cout << "| 现已支持简体中文！                       |\n";
    cout << "--------------------------------------------\n";
    string 命令, 类型, 输入字符串;
cn_main:
    cout << "Jvav>";
    cin >> 命令;
    if (命令 == "帮助") {
        cout << "----Jvav帮助---第(1/1)页----\n";
        cout << "  帮助 [页码]:获取帮助\n  退出:退出Jvav\n  输出:输出字符\n  输入:输入字符以便调用\n  更新:在线检测更新并升级\n  语言:设置Jvav的语言\n  关于:获取关于Jvav的信息\n";
        cout << "----Jvav帮助---第(1/1)页----\n";
        goto cn_main;
    }
    else if (命令 == "退出") {
        cout << "你确定要退出Jvav吗？(是/否)";
        string 退;
        cin >> 退;
        if (退 == "是") {
            return 0;
        }
        else {
            goto cn_main;
        }
    }
    else if (命令 == "输出") {
        cout << "Jvav>输出>";
        cin >> 类型;
        cout << 类型 << endl;
        goto cn_main;
    }
    else if (命令 == "输入") {
        cout << "Jvav>输入>";
        cin >> 输入字符串;
        goto cn_main;
    }
    else if (命令 == "关于") {
        cout << "Jvav编程器，版本为02f05c快照。\n这只是一个梗，但是我们依然把它变成了现实。最早是张浩洋提出的这个梗。\n该版本修复了翻译错误问题并添加了关于功能。\n该程序编写者为30266。\n编译完成于2020年04月15日，20时32分。\n";
        goto cn_main;
    }
    else if (命令 == "更新") {
        cout << "Jvav>更新>正在准备更新...\n";
        Sleep(5000);
        cout << "Jvav>更新>错误！无法从认证服务器获取版本列表！\n";
        goto cn_main;
    }
    else if (命令 == "语言") {
        cout << "请输入您要切换的语言(简体中文/English):";
        string 语言;
        cin >> 语言;
        if (语言 == "简体中文") {
            goto cn_main;
        }
        else if (语言 == "English") {
            system("cls");
            cout << "--------------------------------------------\n";
            cout << "| Jvav Programm         Ver.02w05cSnapshot |\n";
            cout << "| By Dr.ZhangHaoYang      Programmer 30266 |\n";
            cout << "| Enter'help'to get help!                  |\n";
            cout << "| Chinese Simplified is now supported!     |\n";
            cout << "--------------------------------------------\n";
            goto main;
        }
        else {
            cout << "未知的语言。\n";
            goto cn_main;
        }
    }
    else {
        cout << "未知的命令！\n";
        goto cn_main;
    }
}
