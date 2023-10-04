#define l_trig A0
#define l_echo A1
#define f_trig 7
#define f_echo6
#define r_trig A2
#define r_echo A3


int l_wallcheck();
int r_wallcheck();
int f_wallcheck();


int l_wallcheck(){ //CHECK THE DISTANCE VALUE
  digitalWrite(l_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(l_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(l_trig, LOW);
  float distCm = (pulseIn,(l_echo, HIGH)*0.034/2);
  if(distCm<15){return 1;} else if(distCm>=15) {return 0;}; //CHECK THE DISTANCE
  return 0;
};

int f_wallcheck(){ //CHECK THE DISTANCE VALUE
  digitalWrite(f_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(f_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(f_trig, LOW);
  float distCm = (pulseIn,(f_echo, HIGH)*0.034/2);
  if(distCm<15){return 1;} else if(distCm>=15) {return 0;}; //CHECK THE DISTANCE
  return 0;
};

int r_wallcheck(){ //CHECK THE DISTANCE VALUE
  digitalWrite(r_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(r_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(r_trig, LOW);
  float distCm = (pulseIn,(r_echo, HIGH)*0.034/2);
  if(distCm<15){return 1;} else if(distCm>=15) {return 0;}; //CHECK THE DISTANCE
  return 0;
};

