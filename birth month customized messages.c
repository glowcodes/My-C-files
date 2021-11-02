#include<stdio.h>
void main()
{
int birthmonthnumber;
printf("Enter a number between 1-12 \n");
scanf("%d",&birthmonthnumber);

switch(birthmonthnumber)
{
case 1:
    printf("January.\n Beginnings are the best. If i were in change of calendars every day would be January. January babies are ambitious and powerful :) ");
    break;
case 2:
    printf("February.\n  The month of love is here. As we spread our wings of love, my embrace is all yours this month. You're such a gem and you know it!!!");
    break;
case 3:
    printf("March.\n Like the coming of spring, I'm constantly reminded of the sunshine that you bring.\n May the love and joy you bring be returned to you each day!!!");
    break;
case 4:
    printf("April.\n Legends are born in April. It's the month of reawakening. Songbirds' joyful music and the early springtime flowers, colourful umbrellas opened wide for April showers. Days are brighter, Hearts are lighter and promise fills the air ");
    break;
case 5:
    printf("May.\n In this month of springing green, an emerald stone of light and sheen will shower blessings on the way of the thrice-blesses child of May.");
    break;
case 6:
    printf("June.\n Your birth month comes along with bright and sunny days. June is such a special month in oh so many special ways. Rise up and do begin the day's adorning.");
    break;
case 7:
    printf("July. Picnics, parties, games and fun, good times, friends and laughter in the sizzling summer sun. May all your days and years explode with joy and delight.\n");
    break;
    case 8:
    printf("August.\n The heat and sun of August could only be ideal for swimming, vacations and lots of fun.\n You're one of those uplifting people we would want to be in the beach without. May happiness bloom in your haert all year long.");
    break;
    case 9:
    printf("September \n By all these lovely tokens September days are here with summer's best of weather and autumn's best of cheer.\n September babies are a ray of sunshine mixed with a little drop of hurricane :)");
    break;
    case 10:
    printf("October \n Cute and lovable :)\n Libra and Scorpio may be your sign. The colourful foliage is very fine. Halloweeen promises sweets and great fun.\n Costumed kids yell as they run. Empty candy wrappers lie wrinkled and worn and October is so beautiful because you were gifted to us. ");
    break;
    case 11:
    printf("November.\n November is the pearl-grey month, the changeling between the warm crimson October and cold white December, the month when the leaves fall in slow drifting whirls. November is secret and silent but most of all it brought the most amazing person on earth.");
    break;
    case 12:
    printf("December.\n A birthday in December is said to be a bummer. It brings bundles of joy just like it safely delivered you to us.\nYour birthday is just as special as the holiday we share.");
    break;
default:
    printf("Number entered is invalid. Enter the number of month your birthday is i.e between 1-12.");
    break;
}

}

