#include "../header/recByPref.hpp"
using namespace std;

vector<dbElement> RecByPref::recommend(Library* l, user* u) {
	return recByPreferences(l, u);
}
