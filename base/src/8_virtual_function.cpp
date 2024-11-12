#include <iostream>
#include <string>

struct Entity{
	virtual std::string GetName(){
		return "Entity";
	}
};

struct Player : Entity{
private:
	std::string m_name;
public:
	Player(const std::string& name) : m_name(name) {}
	std::string GetName() override {
		return m_name;
}
};


void virtual_function(){
	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;

	Player ie1("das");
//	std::cout << e1.GetName() <<  std::endl;
	Player* p = new Player("wty");
	std::cout << p->GetName() << std::endl;

	Entity* entity = &ie1;
	std::cout << entity->GetName() << std::endl;

	
}
