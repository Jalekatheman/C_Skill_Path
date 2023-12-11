#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race{
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar{
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};
// Print functions section
void printIntro(){
 printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!");
};

void printCountdown(){
  printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!");
};

void printFirstPlaceAfterLap(struct Race race){
  printf("After lap number %d\nFirst Place Is: %s in the %s race car!", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

void printCongratulation(struct Race race){
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!",race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

// Logic functions section
int calculateTimeToCompleteLap(void){

  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;

  return speed + acceleration + nerves;
};

void updateRaceCar(struct RaceCar* raceCar){
  
   raceCar->totalLapTime += calculateTimeToCompleteLap();

};

void updateFirstPlace(struct Race* race,struct RaceCar* raceCar1,struct RaceCar* raceCar2){

      if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
        // If raceCar1 is faster or equal, update firstPlaceDriverName and firstPlaceRaceCarColor with raceCar1's values
        race->firstPlaceDriverName = raceCar1->driverName;
        race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
    } else {
        // If raceCar2 is faster, update firstPlaceDriverName and firstPlaceRaceCarColor with raceCar2's values
        race->firstPlaceDriverName = raceCar2->driverName;
        race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
    }
};

void startRace(struct RaceCar* raceCar1,struct RaceCar* raceCar2){

 struct Race race = {5, 1, "", ""};

  for(int laps = 1; laps <= race.numberOfLaps; laps++){
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);

    updateFirstPlace(&race, raceCar1, raceCar2);
  }
    printFirstPlaceAfterLap(race);
    printCongratulation(race);
};

int main(){
	srand(time(0));
  struct RaceCar raceCar1 = {"MichaelAngelo", "Orange"};
  struct RaceCar raceCar2 = {"Donatello", "Purple"};

  printIntro();
  printCountdown();
  startRace(&raceCar1,&raceCar2);
};