#include "repo.h"
#include "vector.h"
#include <vector>

using namespace std;

const vector<Product>& Repo::getAll() const{

    return this->list;
}

void Repo::deleteAll() {

    list.clear();
}

int Repo::numberProducts() const {

    return int(list.size());
}

void Repo::addProduct(const Product& participant) {

    list.push_back(participant);
}

void Repo::updateProduct(int position, const string &nName, const string &pProducer, const string &tType, float pPrice) {

    list.at(position).setName(const_cast<string &>(nName));

    list.at(position).setProducer(const_cast<string &>(pProducer));

    list.at(position).setType(const_cast<string &>(tType));

    list.at(position).setPrice(pPrice);
}

void Repo::deleteProduct(int position) {

    if (position < 0 || position >= list.size() ) return;

    list.erase(list.begin() + position);
}

const Product& Repo::get(int position) {

    return list.at(position);
}
