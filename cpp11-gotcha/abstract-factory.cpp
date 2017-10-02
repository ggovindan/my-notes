#include<iostream>

using namespace std;

class AbstractEnemyFactory {
public:
  createEnemyTank();
  createEnemyMonster();
};

class Level1Enemy : public AbstractEnemyFactory {
public:
  EnemyTank * createEnemyTank() {
    return new SillyTank();
  }

  createEnemyMonster() {
    createSillyMonster();
  }
} ;

class EnemyTank {
public:
  loadBullter();
}

class SillyTank : public EnemyTank {
public:

}

int main(void) {
  int level = 1;
  AbstractEnemyFactory * enemyFactory
  cout<<"enter level";
  switch(level) {
    case 1:
      enemyFactory = new Level1Enemy();
  }
}