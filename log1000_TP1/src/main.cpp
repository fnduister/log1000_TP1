/* 
 * File:   main.cpp
 * Author: bram
 *
 * Created on November 8, 2015, 8:39 PM
 */

#include <iostream>
#include <string>
#include <fstream>
#include "HashMap.h"


using namespace std;

/* sfasdfasdfasdfasdfads*/
int main(int argc, char** argv) {
if(argc<2){
	std::cerr << "Usage:" << argv[0]<<"VOUS DEVEZ SPECIFIER LE NOM DU FICHIER SVP"<<std::endl;
	return 1;
	
	}

	std::ifstream myFile(std::string(argv[1]),std::ifstream::in);
	string mot;

	while(myFile >> mot){
		cout << mot;
		}
		
  //utilisation normale
  HashMap hmap;
  hmap.put("v1",1);
  hmap.put("v3",1);
  hmap.put("v11",1);
  hmap.put("v13",13);
  
  int value;
  bool res = hmap.get("v13", value);
  if (res)
    cout << value << endl;
  
  hmap.remove("v1");
  res = hmap.get("v1", value);
  if (res)
    cout << "ERROR: " << value << endl;

  std::vector<std::string> keys=hmap.getKeys();
  for(int i=0;i<keys.size();i++){
    cout << keys[i] << endl;
  }
  
  return 0;
}

