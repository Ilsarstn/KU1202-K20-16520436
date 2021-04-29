#inolude <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int ping_Pin = A1;
long dur, cm;

void setup()  {
   cm = read_sensor_ultrasonic();

lod.setCursor(0,1);
lod.print("Jarak");
lod.setCursor(6,1);
lod.print(cm);
print_unit_cm(cm);
}
