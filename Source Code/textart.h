#include<iostream>
#include<Windows.h>

using namespace std;

enum textartstyle {MAINSCREEN, BATTLE, LOOT, STRONGHOLD, TRAP, };

int liner()
{
	cout<<"\n============================================================================================================================================================================================="<<endl;
	return 0;
}

textartstyle t;

int textart()
{
	system("cls");
	
	switch(t)
	{
		case MAINSCREEN :
		{
			liner();

			cout<< R"(
				  _____                                          _  __     _           _     _     
				 / ____|                                 ___    | |/ /    | |         | |   | |    
				| |     __ ___   _____ _ __ _ __  ___   ( _ )   | ' / ___ | |__   ___ | | __| |___ 
				| |    / _` \ \ / / _ \ '__| '_ \/ __|  / _ \/\ |  < / _ \| '_ \ / _ \| |/ _` / __|
				| |___| (_| |\ V /  __/ |  | | | \__ \ | (_>  < | . \ (_) | |_) | (_) | | (_| \__ \  [BETA v1.1.8]
				 \_____\__,_| \_/ \___|_|  |_| |_|___/  \___/\/ |_|\_\___/|_.__/ \___/|_|\__,_|___/

				)"<<endl;

			liner();
		}
		break;

		case BATTLE :
		{
			liner();

			cout<< R"(

				 __     __           _    _                   ______       _                    _    _____                _           _   
				 \ \   / /          | |  | |                 |  ____|     | |                  | |  / ____|              | |         | |  
				  \ \_/ /__  _   _  | |__| | __ ___   _____  | |__   _ __ | |_ ___ _ __ ___  __| | | |     ___  _ __ ___ | |__   __ _| |_ 
				   \   / _ \| | | | |  __  |/ _` \ \ / / _ \ |  __| | '_ \| __/ _ \ '__/ _ \/ _` | | |    / _ \| '_ ` _ \| '_ \ / _` | __|
				    | | (_) | |_| | | |  | | (_| |\ V /  __/ | |____| | | | ||  __/ | |  __/ (_| | | |___| (_) | | | | | | |_) | (_| | |_ 
				    |_|\___/ \__,_| |_|  |_|\__,_| \_/ \___| |______|_| |_|\__\___|_|  \___|\__,_|  \_____\___/|_| |_| |_|_.__/ \__,_|\__|
                                                                                                                          
                     
				)"<<endl;

			liner();
		}	
		break;

		case LOOT :
		{
			liner();

			cout<< R"(

				 __     __           _    _                   ______                    _   _                 _   
				 \ \   / /          | |  | |                 |  ____|                  | | | |               | |  
				  \ \_/ /__  _   _  | |__| | __ ___   _____  | |__ ___  _   _ _ __   __| | | |     ___   ___ | |_ 
				   \   / _ \| | | | |  __  |/ _` \ \ / / _ \ |  __/ _ \| | | | '_ \ / _` | | |    / _ \ / _ \| __|
				    | | (_) | |_| | | |  | | (_| |\ V /  __/ | | | (_) | |_| | | | | (_| | | |___| (_) | (_) | |_ 
				    |_|\___/ \__,_| |_|  |_|\__,_| \_/ \___| |_|  \___/ \__,_|_| |_|\__,_| |______\___/ \___/ \__|
                                                                                                  
                                                                                                                               
				)"<<endl;

			liner();
		}
		break;

		case TRAP:
		{
			//Nothing Yet                                   
		}
		break;
	}
}



