#include<bits/stdc++.h>
using namespace std;
//Encapsulation => Binding data with functions , helpful in achieving data abstraction and hiding of data.
class encapsulationDemo{
	private:
		int score;
		string player;
	public:
		void setScore(int s){
			this->score=s;
		}
		void setPlayer(string s){
			this->player=s;
		}
		int getScore(){
			return this->score;
		}
		string getPlayer(){
			return this->player;
		}
};

int main(){
	encapsulationDemo object;
	object.setScore(98);
	object.setPlayer("steve smith");
	cout << object.getPlayer() << "  "<<object.getScore()<<endl;
	return 0;
}
