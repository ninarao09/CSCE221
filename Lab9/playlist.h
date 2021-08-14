#ifndef PlaylistNode_H
#define PlaylistNode_H

#include <iostream>
#include <string>

using namespace std;
class PlaylistNode
{

public:
   int sum = 0;
   PlaylistNode();
   PlaylistNode(string id, string sname, string aname, int slength);
   void moveHead(int currentpos, int newpos);
   void moveTail(int currentpos, int newpos);
   void moveNodeToHead(int currentpos, int newpos);
   void moveNodeToTail(int currentpos, int newpos);
   void moveNodeUp(int currentpos, int newpos);
   void moveNodeDown(int currentpos, int newpos);
   void InsertAfter(PlaylistNode* newnode);
   void RemoveSong(string remid);
   void ChangePosition(int currentpos, int newpos);
   void PrintSongsByArtistName(string artname);
   void SetNext(PlaylistNode* next);
   string GetID();
   string GetSongName();
   string GetArtistName();
   int GetSongLength();
   void setID(string id);
   void setSong(string sname);
   void setArtist(string aname);
   void setLength(int slength);
   PlaylistNode* GetNext();
   int totalTimeOfPlaylist();
   void PrintPlayListNode(string title);
   
   private:
      string uniqueID;
      string songName;
      string artistName;
      int songLength;
      PlaylistNode* nextNodePtr;
      //PlaylistNode* head;
      
};
#endif