//Made for educational purposes only
//I advice against using this for anything illegal
//Any usage I have suggested must not be taken seriously
//Can be destructive if misused
//I have found most of the tools online so I do not claim ownership for any of them
//I have just compiled them in one place
//~P3RS3S
#include <iostream>
#include <fstream>

using namespace std;

int FlashingLights();
int FakeUpdate();
int BSOD();
int ForkBomb();
int Exit();

int main()
{
    int pick=0;
    cout <<"################################"<<endl;
    cout <<"# The Prankster's Toolkit v1.0 #"<<endl;
    cout <<"################################"<<endl;
    cout <<""<<endl;
    cout <<"1)Flashing Lights         0)Exit "<<endl;
    cout <<"2)Blue Screen Of Death           "<<endl;
    cout <<"3)Fork Bomb                      "<<endl;
    cout <<"4)Fake Windows 10 Update         "<<endl;
    cout <<""<<endl;
    cin>>pick;
    switch(pick)
    {
        case 0:Exit();break;
        case 1:FlashingLights();break;
        case 2:BSOD();break;
        case 3:ForkBomb();break;
        case 4:FakeUpdate();break;
        default:cout << string(50, '\n');main();break;
    }
    return 0;
}

int Exit()
{
    return 1;
}

int FlashingLights()
{
    char rand;
    cout << string(50, '\n')<<endl;
    cout <<"############################################################"<<endl;
    cout <<"#Creates a .vbs                                            #"<<endl;
    cout <<"#Makes the lights on your keyboard go crazy                #"<<endl;
    cout <<"#Also rapidly shifts Caps on and off                       #"<<endl;
    cout <<"#Great for trolling your roommte or anyone really          #"<<endl;
    cout <<"#Can be stopped by killing wscript.exe in the Task Manager #"<<endl;
    cout <<"############################################################"<<endl;
    cout <<""<<endl;
    cout <<"Once you enter anything below, the file will be created in the folder which contains TPT.exe" <<endl;
    cin >>rand;
    ofstream file;
    file.open("TPT_Lights.vbs");
    file << "Set wshShell =wscript.CreateObject(\"WScript.Shell\")" <<endl;
    file << "do" <<endl;
    file << "wscript.sleep 100" <<endl;
    file << "wshshell.sendkeys \"{CAPSLOCK}\"" <<endl;
    file << "wshshell.sendkeys \"{NUMLOCK}\"" <<endl;
    file << "wshshell.sendkeys \"{SCROLLLOCK}\"" <<endl;
    file << "loop" <<endl;
    file.close();
    cout <<string(50, '\n');
    main();
}

int BSOD()
{
    char rand;
    cout << string(50, '\n')<<endl;
    cout <<"##################################################################"<<endl;
    cout <<"#Creates a .bat                                                  #"<<endl;
    cout <<"#Will display the BSOD upon launch                               #"<<endl;
    cout <<"#Pressing the Windows button will allow you to close the program #"<<endl;
    cout <<"#Great for machines in a tech store                              #"<<endl;
    cout <<"##################################################################"<<endl;
    cout <<""<<endl;
    cout <<"Once you enter anything below, the file will be created in the folder which contains TPT.exe" <<endl;
    cin >>rand;
    ofstream file;
file.open("TPT_BSOD.bat");
    file << "@echo off" <<endl;
    file << "echo ^<html^>^<head^>^<title^>BSOD^" <<endl;
    file << "</title^> > bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<hta:application id=\"oBVC\" >> bsod.hta" <<endl;
    file << "echo applicationname=\"BSOD\" >> bsod.hta" <<endl;
    file << "echo version=\"1.0\" >> bsod.hta" <<endl;
    file << "echo maximizebutton=\"no\" >> bsod.hta" <<endl;
    file << "echo minimizebutton=\"no\" >> bsod.hta" <<endl;
    file << "echo sysmenu=\"no\" >> bsod.hta" <<endl;
    file << "echo Caption=\"no\" >> bsod.hta" <<endl;
    file << "echo windowstate=\"maximize\"/^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^</head^>^<body bgcolor=\"#000088\" scroll=\"no\"^> >> bsod.hta" <<endl;
    file << "echo ^<font face=\"Lucida Console\" size=\"4\" color=\"#FFFFFF\"^> >> bsod.hta" <<endl;
    file << "echo ^<p^>A problem has been detected and windows has been shutdown to prevent damage to your computer.^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>DRIVER_IRQL_NOT_LES_OR_EQ" <<endl;
    file << "echo UAL^</p^> >> bsod.htaecho. >> bsod.hta" <<endl;
    file << "echo ^<p^>If this is the first time you've seen this stop error screen, restart your computer, If this screen appears again, follow these steps:^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>Check to make sure any new hardware or software is properly installed. If this is a new installation, ask your hardware or software manufacturer for any windows updates you might need.^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>If problems continue, disable or remove any newly installed hardware or software. Disable BIOS memory options such as caching or shadowing. If you need to use Safe Mode to remove or disable components, restart your computer, press F8 to select Advanced Startup Options, and then select Safe Mode.^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>Technical information:^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>*** STOP: 0x000000D1 (0x0000000C,0x00000002,0x00000000,0xF86B5A89)^</p^> >> bsod.htaecho. >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>*** gv3.sys - Address F86B5A89 base at F86B5000, DateStamp 3dd9919eb^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^<p^>Beginning dump of physical memory^</p^> >> bsod.hta" <<endl;
    file << "echo ^<p^>Physical memory dump complete.^</p^> >> bsod.hta" <<endl;
    file << "echo ^<p^>Contact your system administrator or technical support group for further assistance.^</p^> >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo. >> bsod.hta" <<endl;
    file << "echo ^</font^> >> bsod.hta" <<endl;
    file << "echo ^</body^>^</html^> >> bsod.hta" <<endl;
    file << "start \"\" /wait \"bsod.hta\"" <<endl;
    file << "del /s /f /q \"bsod.hta\" > nul" <<endl;
    file.close();
    cout <<string(50, '\n');
    main();
}

int ForkBomb()
{
    char rand;
    cout << string(50, '\n')<<endl;
    cout <<"###################################################"<<endl;
    cout <<"#                   DANGER                        #"<<endl;
    cout <<"#          THIS WILL CRASH YOUR SYSTEM            #"<<endl;
    cout <<"#         ANY UNSAVED FILES WILL BE LOST          #"<<endl;
    cout <<"###################################################"<<endl;
    cout <<""<<endl;
    cout <<"##################################################"<<endl;
    cout <<"#Creates a .bat                                  #"<<endl;
    cout <<"#Will crash the system upon launch               #"<<endl;
    cout <<"#Crash time depends on the system                #"<<endl;
    cout <<"#A restart is required to \"uncrash\" the system   #"<<endl;
    cout <<"##################################################"<<endl;
    cout <<""<<endl;
    cout <<"Once you enter anything below, the file will be created in the folder which contains TPT.exe"<<endl;
    cin >>rand;
    ofstream file;
    file.open("TPT_Crash.bat");
    file << "%0|%0";
    file.close();
    cout <<string(50, '\n');
    main();
}

int FakeUpdate()
{
    char rand;
    cout << string(50, '\n')<<endl;
    cout <<"#######################################################"<<endl;
    cout <<"#Creates a .bat                                       #"<<endl;
    cout <<"#Requiers Internet!                                   #"<<endl;
    cout <<"#Opens a webpage wth a fake Windows 10 Update         #"<<endl;
    cout <<"#Make sure to press F11 to make the illusion complete #"<<endl;
    cout <<"#######################################################"<<endl;
    cout <<""<<endl;
    cout <<"Once you enter anything below, the file will be created in the folder which contains TPT.exe"<<endl;
    cin >>rand;
    ofstream file;
    file.open("TPT_Update.bat");
    file << "start http://fakeupdate.net/win10u/index.html" <<endl;
    file << "exit" <<endl;
    file.close();
    cout <<string(50, '\n');
    main();
}
