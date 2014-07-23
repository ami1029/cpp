using namespace std;

class Super {
  public:
    void read();
    int getScore();
  private:
    int score;
};

class Math : public Super {
  public:
   void announce();
};

class Social : public Super {
  public:
   void announce();
};

class Science : public Super {
  public:
   void announce();
};

/*
class Calc {
  private:
    int s;
    int a;
  public:
    int sum(int math, int social, int science);
    int avg(int math, int social, int science);
};
*/
