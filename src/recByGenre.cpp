#include "../header/recByGenre.hpp"
using namespace std;

std::vector<dbElement> RecByGenre::recommend(Library* l, user* u) {
	return recByGenre(l, u);
}
