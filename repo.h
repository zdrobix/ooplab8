#ifndef REPO_H
#define REPO_H
#include "domain.h"
#include <vector>

class Repo {

public:
    Repo() = default;

    /*
     * Distrugerea listei
     */
    ~Repo() = default;

    /*
    * Primeste ca parametru obiectul Product, si il adauga in memorie.
    * @param: Product
    */
    void addProduct(const Product& product);

    /*
     * Acceseaza produsul prin pozitia furnizata ca parametru, si il modifica.
     * @param: pozitia pe care se afla elementul modificat, numele nou, producatorul nou, tipul nou si pretul nou
     */
    void updateProduct(int position, const string& nName, const string& pProducer, const string& tType, float pPrice);

    /*
     * Sterge elementul din memorie.
     * @param: pozitia pe care se afla elementul
     */
    void deleteProduct(int position);

    /*
     * Daca exista alt Repo deschis, se sterge.
     * Pentru a asigura buna functionare a programului(fara duplicate).
     */
    Repo(const Repo& ot) = delete;

    /*
     * Returneaza toate produsele adaugate.
     * @return: vector
     */
    const vector<Product>& getAll() const;

    /*
     * Deletes all products.
     */
    void deleteAll();

    /*
     * Returneaza cate produse au fost adaugate(numarul)
     * @return: numarul de produse
     */
    int numberProducts() const;

    /*
     * Returneaza un numar de la o pozitie anume.
     */
    const Product& get(int position);


private:
    vector<Product> list;
};

#endif //REPO_H