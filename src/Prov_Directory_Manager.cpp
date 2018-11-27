//
// Created by petar on 11/21/2018.
//

#include "Prov_Directory_Manager.h"
#include <fstream>

Prov_Directory_Manager::Prov_Directory_Manager(): dir_head(NULL)
{
	Add_Directory();
}
		

Prov_Directory_Manager::~Prov_Directory_Manager()
{
	Delete_List(dir_head);
}


void Prov_Directory_Manager::Add_Directory()
{
	char temp[25];
	string tempservicename;
	int tempserviceID;
	int tempservicefee;
	ifstream fin;
	fin.open("Directory_List.txt");
	if(fin)
	{
		while(!fin.eof())
		{
			fin.get(temp, 25, '\n');
			tempservicename = temp;
			fin.ignore(100,'\n');
			fin >> tempservicefee;
			fin.ignore();
			fin >> tempserviceID;
			fin.ignore();
			Provider_Directory * current = new Provider_Directory;
			current->Add_Entry(tempservicename, tempservicefee, tempserviceID);
			Make_Directory(dir_head, current);
			fin.peek();
		}
	}
}


void Prov_Directory_Manager::Make_Directory(Provider_Directory *& head, Provider_Directory *& current)
{
	if(!head)
	{
		head = current;
		return;
	}

	if(head->Compare_Directory_Service(current))
		Make_Directory(head->Return_Dir_Next(), current);

}


void Prov_Directory_Manager::Display_Provider_Directory()
{
	Display_Provider_Directory(dir_head);
}


void Prov_Directory_Manager::Display_Provider_Directory(Provider_Directory * head)
{
	if(!head)
		return;

	head->Directory_Display();
	Display_Provider_Directory(head->Return_Dir_Next());
}


void Prov_Directory_Manager::Delete_List(Provider_Directory *& head)
{
	if(!head)
		return;

	Delete_List(head->Return_Dir_Next());
	delete head;
	head = NULL;
}

