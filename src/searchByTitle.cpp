#include "../header/searchByTitle.hpp"
#include <vector>
using namespace std;

vector<dbElement> SearchByTitle::recommend(Library* l, string sc) {
	vector<dbElement> result = {l->searchByTitle(sc)};
	return result;
}
