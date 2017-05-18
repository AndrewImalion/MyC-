//learning how to use class
//@GreatBaron

#include<iostream>
#include<string>

using namespace std;

//weapon type, magical and pysical
enum weapon_type
{
	MAGICAL,
	PYSICAL
};

//weapon class, name,type,power.it depends getPower
class Weapon
{
public:
	Weapon(string name,weapon_type type,int power);
	string getWPName();
	weapon_type getWPTpye();
	int getWPPower();
	
private:
	string weaponName;
	weapon_type weaponType;
	int weaponPower;

};

//a weapon (<name>,<type>,<power>) default:unname,pysical,1
Weapon::Weapon(string name="unnamed",weapon_type type=PYSICAL,int power=1)
{
	weaponName = name;
	weaponType = type;
	weaponPower = power;
};

string Weapon::getWPName(){
	return weaponName;
};
weapon_type Weapon::getWPTpye(){
	return weaponType;
};
int Weapon::getWPPower(){
	return weaponPower;
};

//diferent weapons
Weapon FmgLsSwd("Flaming!Laser!Sword!", PYSICAL, 5);
Weapon FrzDkRd("Freezing!Dark!Maker!", MAGICAL, 6);
Weapon item0("Unarmed", PYSICAL, 0);
Weapon item1("Blade", PYSICAL, 3);
Weapon item2("Rod", MAGICAL, 2);

//base class
class Profession
{
public:
	Profession();
	string getName();
	Weapon getWeapon();
	
	virtual int getPower() = 0;
	
protected:
	string Name;
	Weapon weapon;

};

Profession::Profession()
{
	cout << "a new person!" << Name << endl;
};

//class Magician
class Magician:public Profession
{
public:
	Magician(string name,Weapon item,int mana,int degree);
	int getMana();
	int getDegree();
	void setMana(int delt);
	void setDegree(int delt);
	
	int getPower(){
		return magicianDegree*magicianMana + (weapon.getWPTpye() == MAGICAL ? 2 : 1)*weapon.getWPPower();
	};

private:
	int magicianMana;
	int magicianDegree;

};

Magician::Magician(string name, Weapon item, int mana, int degree)
{
	Name = name;
	weapon = item;
	magicianMana = mana;
	magicianDegree = degree;

	cout << "a new magician! His name is " << Name
		<< ".He takes on a" << weapon.getWPName()
		<< "\n His mana is:" << magicianMana
		<< "\n His degree is:" << magicianDegree << endl;
};
int Magician::getDegree(){
	return magicianDegree;
};
int Magician::getMana(){
	return magicianMana;
};
void Magician::setDegree(int delt){
	magicianDegree += delt;
};
void Magician::setMana(int delt){
	magicianMana += delt;
};

//class Swordsman
class Swordsman:public Profession
{
public:
	Swordsman(string name, Weapon item, int strgth, int lv);
	int getStrength();
	int getLevel();
	void setStrength(int delt);
	void setLevel(int delt);

	int getPower(){
		return swordsmanLevel*swordsmanStrength + (weapon.getWPTpye() == PYSICAL ? 3 : 0)*weapon.getWPPower();
	};

private:
	int swordsmanStrength;
	int swordsmanLevel;

};

Swordsman::Swordsman(string name, Weapon item, int strgth, int lv)
{
	Name = name;
	weapon = item;
	swordsmanStrength = strgth;
	swordsmanLevel = lv;

	cout << "a new swordsman! His name is " << Name
		<< ".He takes on a" << weapon.getWPName()
		<< "\n His strength is:" << swordsmanStrength
		<< "\n His level is:" << swordsmanLevel << endl;
};
int Swordsman::getStrength(){
	return swordsmanStrength;
};
int Swordsman::getLevel(){
	return swordsmanLevel;
};
void Swordsman::setStrength(int delt){
	swordsmanStrength += delt;
};
void Swordsman::setLevel(int delt){
	swordsmanLevel += delt;
};

//ToDo: a new class Magisworder
int main()
{
	cout << "debug" << endl;

	
	return 0;
};
