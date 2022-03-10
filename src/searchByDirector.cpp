#include "../header/searchByDirector.hpp"
#include <vector>
using namespace std;

vector<dbElement> SearchByDirector::recommend(Library* l, string sc) {
	return l->searchByDirector(sc);
}
