#include <iostream>
#include<string>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(string title){
   cout << title << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist";
   cout << endl;
   cout << "t - Output total time of playlist ";
   cout << "(in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl;
   cout<<endl;
}

int main(){
   char choice;
   string remid, artistname, title;
   int pos, newpos, total;
   
   PlaylistNode pl;
   string id, sname, aname;
   int slength;
      
   PlaylistNode* newnode = new PlaylistNode();
   PlaylistNode* temp2;

   cout << "Enter playlist's title:";
   getline(cin, title);
   cout<<endl;
   cout<<endl;
   
   while (true){
     PrintMenu(title);
   
     cout << "Choose an option:";
     cin >> choice;
     cout<<endl;
   
     switch (choice)
     {
   
     case 'a':
      cout << "ADD SONG" << endl;
      cin.ignore();
   
  
      cout << "Enter song's unique ID:" << endl;;
      getline(cin, id);
      cout << "Enter song's name:" << endl;;
      getline(cin, sname);
      
      cout << "Enter artist's name:"<< endl;;
      getline(cin, aname);
      
      cout << "Enter song's length (in seconds):" << endl;
      cin >> slength;
      cout<<endl;
      
      
      newnode->setID(id);
      newnode->setSong(sname);
      newnode->setArtist(aname);
      newnode->setLength(slength);
      newnode->SetNext(NULL);
      
      temp2 = &pl;
      while(temp2->GetNext() != NULL){
         temp2 = temp2->GetNext();
      }
      temp2->InsertAfter(newnode);
      
      break;
   
     case 'd':
   
      if (pl.sum == 0){
         cout << "Playlist is empty." << endl;
      }
      else{
         cout<< endl;
       cout << "REMOVE SONG" << endl;
   
       cin.ignore();
   
       cout << "Enter song's unique ID:" << endl;;
       getline(cin, remid);

       pl.RemoveSong(remid);
       cout << endl;
      }
      break;
   
     case 'c':
   
      if (pl.sum == 0){
       cout << "Playlist is empty. Please ";
       cout << "add songs in the playlist.";
       cout << endl;
      }
      else{
       cout << "CHANGE POSITION OF SONG";
       cout << endl;
   
       cout << "Enter song's current position:" << endl;
       cin >> pos;
       cout << "Enter new position for song:" << endl;
       cin >> newpos;
   
       pl.ChangePosition(pos, newpos);
      }
      break;
   
     case 's':
   
      if (pl.sum == 0){
       cout << "Playlist is empty." << endl;
      }
      else{
   
       cin.ignore();
       cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
       cout << "Enter artist's name:" << endl;
       cout << endl;
       getline(cin, artistname);
   
       pl.PrintSongsByArtistName(artistname);
      }
      break;
   
     case 't':
   
      cout << "OUTPUT TOTAL TIME OF PLAYLIST ";
      cout << "(IN SECONDS)" << endl;
      total = pl.totalTimeOfPlaylist();
      cout << "Total time: " << total << " seconds" << endl;
      cout << endl;
      break;
   
     case 'o':
     
      
      if (pl.sum == 0){
       cout << title << " - OUTPUT FULL PLAYLIST" << endl;
       cout << "Playlist is empty" << endl;
       cout << endl;
      }
      else{
       pl.PrintPlayListNode(title);
      }
      break;
   
     case 'q':
   
      exit(0);
      break;
   
     default:
      cout << "Invalid Choice" << endl;
     }
   }
   
   system("pause");
   
   return 0;
}