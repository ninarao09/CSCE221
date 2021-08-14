#include <iostream>
#include <string>
#include "PlaylistNode.h"

using namespace std;

PlaylistNode::PlaylistNode(){
   uniqueID = "none";
   songName = "none";
   artistName = "none";
   songLength = 0;
   nextNodePtr = NULL;
}

PlaylistNode::PlaylistNode(string id, string sname, string aname, int slength){
   uniqueID = id;
   songName = sname;
   artistName = aname;
   songLength = slength;
}

PlaylistNode* PlaylistNode::GetNext(){
   return nextNodePtr;
}

string PlaylistNode::GetSongName(){
   return songName;
}

string PlaylistNode::GetArtistName(){
   return artistName;
}

int PlaylistNode::GetSongLength(){
   return songLength;
}

string PlaylistNode::GetID(){
   return uniqueID;
}

void PlaylistNode::setSong(string sname){
   songName = sname;
}

void PlaylistNode::setArtist(string aname){
   artistName = aname;
}

void PlaylistNode::setLength(int slength){
   songLength = slength;
}

void PlaylistNode::setID(string id){
   uniqueID = id;
}

void PlaylistNode::SetNext(PlaylistNode* next){
   nextNodePtr = next;
}

void PlaylistNode::InsertAfter(PlaylistNode* newnode){

      PlaylistNode* temp = this->GetNext(); 
      this->SetNext(newnode);
      newnode->SetNext(temp);
   
   sum=sum+1;
}

void PlaylistNode::RemoveSong(string remid){
   // int flag = 0;
   // string songname;
   
   // PlaylistNode* current;
   // PlaylistNode* prev;
   
   // current = this;
   // prev = this;
   
   // do{
   //  if (current->GetID() == remid){
   //    flag = 1;
   //    break;
   //  }
   
   //  prev = current;
   //  current = current->GetNext();
   
   // } while (current != NULL);
   
   // if (flag == 0){
   //  cout << "There is no song with unique ID:" << remid << " in the playlist." << endl;
   // }
   // else{
   //  songname = current->GetSongName();
   
   //  if (head->GetID() == remid){
   //    head = head->GetNext();
   //    delete current;
   //  }
   //  else{
     
   //    prev->SetNext(current->GetNext());
   //    delete current;
   //  }
   //  cout << "\"" << songname << "\" removed." << endl;
   
   //  sum=sum-1;
   // }
}

// void PlaylistNode::moveHead(int currentpos, int newpos){
//    int c = 1;
//    string songname;
   
//    PlaylistNode* curr;
//    PlaylistNode* pre;
//    PlaylistNode* tail;
   
//    curr = head->GetNext();
//    pre = head;
//    tail = head;
//    do{
//     if (c == newpos){
//       break;
//     }
   
   
//     pre = tail;
//     tail = tail->GetNext();
   
//     c++;
   
//    } while (tail != NULL);
   
//    songname = head->GetSongName();
   
//    if (currentpos == 1 && newpos == 2){
//     pre->SetNext(tail->GetNext());
//     tail->SetNext(pre);
//     head = tail;
//    }
//    else{
//     pre->SetNext(head);
//     head->SetNext(tail->GetNext());
//     tail->SetNext(curr);
//     head = tail;
//    }
//    cout << "\"" << songname << "\" moved to position " << newpos << endl;
//    cout << endl;
//}

// void PlaylistNode::moveTail(int currentpos, int newpos){
//    int c;
//    c = 1;
//    string songname;
   
   
//    PlaylistNode* last;
//    PlaylistNode* curr;
//    PlaylistNode* prev;
//    PlaylistNode* tail;
   
//    prev = head;
//    curr = head;
//    last = head;
//    tail = head;
   
//    while (last->GetNext() != NULL){
//     tail = last;
//     last = last->GetNext();
//    }
//    songname = last->GetSongName();
//    do{
//     if (c == newpos){
//       break;
//     }
   
   
//     prev = curr;
//     curr = curr->GetNext();
   
//     c++;
   
//    } while (curr != NULL);
   
//    if (newpos == 1 && sum == 2){
   
//     prev->SetNext(last->GetNext());
//     last->SetNext(prev);
//     head = last;
// }
   
   
//    else if (newpos == 1 && sum>2){
   
//     last->SetNext(curr->GetNext());
//     tail->SetNext(curr);
//     curr->SetNext(NULL);
//     head = last;
//    }
   
   
//    else if (newpos == sum - 1 && newpos<currentpos){
   
//     prev->SetNext(last);
//     last->SetNext(curr);
//     curr->SetNext(NULL);
//    }
   
//    else{
   
//     prev->SetNext(last);
//     last->SetNext(curr->GetNext());
//     tail->SetNext(curr);
//     curr->SetNext(NULL);
//    }
//    cout << "\"" << songname << "\" moved to position " << newpos << endl;
// }


// void PlaylistNode::moveNodeToHead(int currentpos, int newpos){
//    int c = 1;
//    string songname;
   
//    PlaylistNode* curr;
//    PlaylistNode* prev;
//    PlaylistNode* tail;
   
//    tail = head->GetNext();
//    prev = head;
//    curr = head;
//    do{
//     if (c == currentpos){
//       break;
//     }
   
   
//     prev = curr;
//     curr = curr->GetNext();
   
//     c++;
   
//    } while (curr != NULL);
//    songname = curr->GetSongName();
   
   
//    if (currentpos == 2){
//     prev->SetNext(curr->GetNext());
//     curr->SetNext(prev);
//     head = curr;
//    }
//    else{
//     prev->SetNext(head);
//     head->SetNext(curr->GetNext());
//     curr->SetNext(tail);
//     head = curr;
//    }
//    cout << "\"" << songname << "\" moved to position " << newpos << endl;
// }


// void PlaylistNode::moveNodeToTail(int currentpos, int newpos){
//    int c;
//    c = 1;
//    string songname;
   
//    PlaylistNode* last;
//    PlaylistNode* curr;
//    PlaylistNode* prev;
//    PlaylistNode* tail;
   
//    prev = head;
//    curr = head;
//    last = head;
//    tail = head;
   
//    while (last->GetNext() != NULL){
//     tail = last;
//     last = last->GetNext();
//    }
//    do{
//     if (c == currentpos){
//       break;
//     }
   
//     prev = curr;
//     curr = curr->GetNext();
   
//     c++;
   
//    } while (curr != NULL);
//    songname = curr->GetSongName();
   
//    if (c == newpos - 1){
//     prev->SetNext(last);
//     last->SetNext(curr);
//     curr->SetNext(NULL);
//    }
   
//    else if (currentpos == 1){
//     last->SetNext(curr->GetNext());
//     tail->SetNext(curr);
//     curr->SetNext(NULL);
//     head = last;
//    }
//    else{
//     prev->SetNext(last);
//     last->SetNext(curr->GetNext());
//     tail->SetNext(curr);
//     curr->SetNext(NULL);
//    }
//    cout << "\"" << songname << "\" moved to position " << newpos << endl;
// }

// void PlaylistNode::moveNodeUp(int currentpos, int newpos){
//    int c = 1;
//    int s = 1;
//    string songname;
   
   
//    PlaylistNode* curr;
//    PlaylistNode* prev;
//    PlaylistNode* last;
//    PlaylistNode* tail;
   
//    tail = head;
//    last = head;
//    prev = head;
//    curr = head;
   
//    do{
//     if (c == currentpos){
//       break;
//     }
   
   
//     prev = curr;
//     curr = curr->GetNext();
   
//     c++;
   
//    } while (curr != NULL);
   
//    do{
//     if (s == newpos){
//       break;
//     }
   
//     tail = last;
//     last = last->GetNext();
   
//     s++;
   
//    } while (last != NULL);
//    songname = last->GetSongName();
   
//    PlaylistNode* nextnode;
//    nextnode = last->GetNext();
   
   
//    if (newpos == currentpos + 1){
   
//     prev->SetNext(last);
//     last->SetNext(curr);
//     curr->SetNext(nextnode);
//    }
//    else{
   
//     prev->SetNext(last);
//     last->SetNext(curr->GetNext());
//     tail->SetNext(curr);
//     curr->SetNext(nextnode);
//    }
//    cout << "\"" << songname << "\" moved to position " << newpos << endl;
// }

// void PlaylistNode::moveNodeDown(int currentpos, int newpos){
//    int c = 1;
//    int s = 1;
//    string songname;
   
//    PlaylistNode* curr;
//    PlaylistNode* prev;
//    PlaylistNode* last;
//    PlaylistNode* tail;
   
//    tail = head;
//    last = head;
//    prev = head;
//    curr = head;
//    do{
//     if (c == currentpos){
//       break;
//     }
   
   
//     prev = curr;
//     curr = curr->GetNext();
   
//     c++;
   
//    } while (curr != NULL);
   
//    do{
//     if (s == newpos){
//       break;
//     }
    
//     tail = last;
//     last = last->GetNext();
   
//     s++;
   
//    } while (last != NULL);
//    songname = last->GetSongName();
   
   
//    PlaylistNode* nextnode;
//    nextnode = curr->GetNext();
   
   
//    if (newpos == currentpos - 1){
//     tail->SetNext(curr);
//     curr->SetNext(last);
//     last->SetNext(nextnode);
//    }
//    else{
   
//     tail->SetNext(curr);
//     curr->SetNext(last->GetNext());
//     prev->SetNext(last);
//     last->SetNext(nextnode);
//    }
//    cout << "\"" << songname << "\" moved to position " << newpos << endl;
// }

// void PlaylistNode::ChangePosition(int currentpos, int newpos){
//    if (currentpos == newpos){
//     cout << "Re-write the distinct positions." << endl;
//    }
   
//    else if (currentpos <= 0 || (currentpos>sum && newpos <= 0) || newpos>sum){
//     cout << "Positions are out of the range." << endl;
//    }
   
//    else if (currentpos == 1){
//     moveHead(currentpos, newpos);
//    }
   
//    else if (currentpos == sum){
//     moveTail(currentpos, newpos);
//    }
   
//    else if (newpos == 1){
//     moveNodeToHead(currentpos, newpos);
//    }
   
   
//    else if (newpos == sum){
//     moveNodeToTail(currentpos, newpos);
//    }
   
//    else if (currentpos<newpos){
//     moveNodeUp(currentpos, newpos);
//    }
   
//    else if (currentpos>newpos){
//     moveNodeDown(currentpos, newpos);
//    }
// }


// void PlaylistNode::PrintSongsByArtistName(string artname){
//    int c = 1;
//    int f = 0;
   
   
//    PlaylistNode* current;
   
//    current = head;
//    do{
//     if (current->GetArtistName() == artname){
//          cout << c << "." << endl;
//          cout << "Unique ID: ";
//          cout << current->GetID() << endl;
//          cout << "Song Name: ";
//          cout << current->GetSongName();
//          cout << endl;
//          cout << "Artist Name: ";
//          cout << current->GetArtistName();
//          cout << endl;
//          cout << "Song Length ";
//          cout << "(in seconds): ";
//          cout << current->GetSongLength();
//          cout << endl;
//          cout << endl;
//          f = 1;
//     }
   
//     current = current->GetNext();
   
//     c++;
   
//    } while (current != NULL);
   
//    if (f == 0){
//     cout << "There is no song of ";
//     cout << artname << " in the playlist.";
//     cout << endl;
//    }
// }


// int PlaylistNode::totalTimeOfPlaylist(){
//    if (sum == 0){
//     return 0;
//    }
   
//    int total = 0;
   
//    PlaylistNode* cur;
   
//    cur = head;
   
//    while (cur != NULL){
//     total = total + cur->GetSongLength();
//     cur = cur->GetNext();
//    }
   
//    return total;
// }

// void PlaylistNode::PrintPlayListNode(string title){
//    PlaylistNode* cur;
//    cur = head; 
//    int count = 1;
   
//    cout << title << " - OUTPUT FULL PLAYLIST" << endl;
   
//    do{
//     cout << count << "." << endl;
//     cout << "Unique ID: " << cur->GetID();
//     cout << endl;
//     cout << "Song Name: ";
//     cout << cur->GetSongName() << endl;
//     cout << "Artist Name: ";
//     cout << cur->GetArtistName() << endl;
//     cout << "Song Length (in seconds): ";
//     cout << cur->GetSongLength() << endl;
//     cout << endl;
   
//     cur = cur->GetNext();
   
//     count++;
   
//    } while (cur != NULL);
// }