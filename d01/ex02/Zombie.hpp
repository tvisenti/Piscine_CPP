#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
	public:
		Zombie(char *name, char *type);
		~Zombie(void);

		enum type { classic, boomer, hunter, tank };
		std::string	name;
};

#endif
