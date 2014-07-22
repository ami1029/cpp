using namespace std;

class Math {
  protected:
   int matread();
   int mat;
};

class Social {
  protected:
   int socread();
   int soc;
};

class Science {
  protected:
   int sciread();
   int sci;
};

class Calc: public Math, public Social, public Science {
  private:
    int s;
    int a;
  public:
    Calc(){
      matread();
      socread();
      sciread();
    }
    int sum();
    int avg();
};
