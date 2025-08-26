#include <iostream>
#include <string>
using namespace std;

enum yn { no, yes };
enum color { red, yellow, green, orange };

void out(yn x);

string colors[] = { "red", "yellow", "green", "orange" };

class Fruit {
public:
    yn annual;
    yn perennial;
    yn tree;
    yn tropical;
    color clr;
    string name;
};

class Apple : public Fruit {
    yn cooking;
    yn crunchy;
    yn eating;
public:
    void seta(const string& n, color c, yn ck, yn crchy, yn e);
    void show();
};

class Orange : public Fruit {
    yn juice;
    yn sour;
    yn eating;
public:
    void seto(const string& n, color c, yn j, yn sr, yn e);
    void show();
};

void Apple::seta(const string& n, color c, yn ck, yn crchy, yn e) {
    name = n;
    annual = no;
    perennial = yes;
    tree = yes;
    tropical = no;
    clr = c;
    cooking = ck;
    crunchy = crchy;
    eating = e;
}

void Orange::seto(const string& n, color c, yn j, yn sr, yn e) {
    name = n;
    annual = no;
    perennial = yes;
    tree = yes;
    tropical = yes;
    clr = c;
    juice = j;
    sour = sr;
    eating = e;
}

void Apple::show() {
    cout << name << " apple is:" << endl;
    cout << "Annual: "; out(annual);
    cout << "Perennial: "; out(perennial);
    cout << "Tree: "; out(tree);
    cout << "Tropical: "; out(tropical);
    cout << "Color: " << colors[clr] << endl;
    cout << "Good for cooking: "; out(cooking);
    cout << "Crunchy: "; out(crunchy);
    cout << "Good for eating: "; out(eating);
    cout << endl;
}

void Orange::show() {
    cout << name << " orange is:" << endl;
    cout << "Annual: "; out(annual);
    cout << "Perennial: "; out(perennial);
    cout << "Tree: "; out(tree);
    cout << "Tropical: "; out(tropical);
    cout << "Color: " << colors[clr] << endl;
    cout << "Good for juice: "; out(juice);
    cout << "Sour: "; out(sour);
    cout << "Good for eating: "; out(eating);
    cout << endl;
}

void out(yn x) {
    if (x == no)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}

int main() {
    Apple a1, a2;
    Orange o1, o2;

    a1.seta("Red Delicious", red, no, yes, yes);
    a2.seta("Jonathan", red, yes, no, yes);
    o1.seto("Navel", orange, no, no, yes);
    o2.seto("Valencia", orange, yes, yes, no);

    a1.show();
    a2.show();
    o1.show();
    o2.show();

    return 0;
}
