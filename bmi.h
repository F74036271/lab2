#include<string>
using namespace std;

class Bmi{
	public:
		float bmi();
		string category(float value);
		void setHeight(int height);
		void setWeight(int weight);
		int getHeight();
		int getWeight();
    	private:
		float Height, Weight;
};
