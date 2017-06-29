//headfile for EatWot

class Food
{
private:
	std::string foodName;
	int foodLocation;
	int lowestPrice;
	int highestPrice;

public:
	Food(std::string name, int lowest , int highest , int location );
	void showFoodPrice();
	std::string getFoodName();
	int getFoodLocation();

};