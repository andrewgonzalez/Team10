//
// Created by petar on 11/21/2018.
//

#ifndef TEAM10_PROV_DIRECTORY_MANAGER_H
#define TEAM10_PROV_DIRECTORY_MANAGER_H

#include "Provider_Directory.h"

//This class will pull from the external file and fill out the entire list of different services available. The list will be viewable by anybody using the Display_Provider_Directory() function. 

class Prov_Directory_Manager {

	public:
		Prov_Directory_Manager();
		~Prov_Directory_Manager();
		void Add_Directory();
		void Make_Directory(Provider_Directory *& head, Provider_Directory *& current);
		void Display_Provider_Directory();
		void Display_Provider_Directory(Provider_Directory * head);
		void Delete_List(Provider_Directory *& head);
	protected:
		Provider_Directory * dir_head;
};


#endif
