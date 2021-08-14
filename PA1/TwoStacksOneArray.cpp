#include <iostream>
#include <string>
using namespace std;

class TwoStacksinArray{
	
	private:
		int *Array;
		int SizeArray;
		int TopofStack1;
		int TopofStack2;
		bool full = false;
		
	public:
		TwoStacksinArray(int MaxSize){
			SizeArray = MaxSize;
			Array = new int[MaxSize];
			TopofStack1 = -1;
			TopofStack2 = SizeArray;
		}
		void pushStack1(int x){
			if(TopofStack1<TopofStack2-1){
				TopofStack1 = TopofStack1 +1;
				Array[TopofStack1] = x;
			}
			else{
				full = true;
				exit(1);
			}
		}
		void pushStack2(int x){
			if(TopofStack1<TopofStack2-1){
				TopofStack2 = TopofStack2 - 1;
				Array[TopofStack2] = x;
			}
			else{
				full = true;
				exit(1);
			}
		}
		
		bool isFull(){
			if(full){
				return true;
			}
		}
		
		int popStack1(){
			if(TopofStack1 >= 0){
				int x = Array[TopofStack1];
				TopofStack1 = TopofStack1 - 1;
				return x;
			}
			else{
				cout << "empty stack"<<endl;
				
			}
		}
		int popStack2(){
			if(TopofStack2 < SizeArray){
				int x = Array[TopofStack2];
				TopofStack2 = TopofStack2 + 1;
				return x;
			}
			else{
				cout << "empty stack"<<endl;
			
			}
		}

		void printStack1(){
			int count = 0;
			while(count<=TopofStack1){
				cout<<Array[count++]<< " ";
			}

		}
		void printStack2(){
			int count = SizeArray-1;
			while(count >=TopofStack2){
				cout<<Array[count--]<<" ";
			}

		}
		
};

int main(){
	TwoStacksinArray Array(10); 
	Array.pushStack1(1);
	Array.pushStack1(10);
	Array.pushStack1(100);
	Array.pushStack2(27);	
	Array.pushStack2(19);
	Array.pushStack2(20);
	Array.pushStack2(30);
	
	Array.isFull();
	
	Array.printStack1();
	cout <<endl;
	Array.printStack2();
	
	Array.popStack1();
	Array.popStack2();
	Array.pushStack2(26);
	
	cout << endl;
	Array.printStack1();
	cout<<endl;
	Array.printStack2();
	
	return 0;
}