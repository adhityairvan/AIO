#include "iostream"
using namespace std;
class cBangun{
	private:
	int panjang;
	int lebar;
	public:
	void setpanjanglebar(int p,int l);
	int hitungluas(int panjang,int lebar){
		return panjang*lebar;
	}	
};

void cBangun::setpanjanglebar(int p,int l){
	panjang=p;
	lebar=l;
}

class program{
	static int main(){
		cBangun a;
		int x,y;
		cin>>x;
		cin>>y;
		a.setpanjanglebar(x,y);
		cout<<"hasil luas nya adalah "<<a.hitungluas<<endl;
	}
};
