using namespace std;

class Enter {
  public:
    void read();
    int get();
  private:
    int price;
};

class Price : public Enter {
  public:
    void ask();
};

class Quantity : public Enter {
  public:
    void ask();
};
