/* 
 *
 * Project 3.
 *
 * Task: Modify the broker.c program of Section 5.2 by making both of the
 * following changes:
 *
 * (a) 	Ask the user to enter the number of shares and the price per share,
 * 		instead of the value of the trade.
 *
 * (b)	Add statements that compute the origCommission charged by a rival broker
 * 		($33 plus 3c per share for fewer than 2000 shares; $33 plus 2c per
 * 		share for 2000 shares or more). Display the rival's origCommission as well
 * 		as the origCommission charged by the original broker.
 *
 * Date: 2025-02-08
 * Time: 06:17 AM
 *
 */

#include <stdio.h>

int main(void)
{
  float origCommission, value;
  int 	shareNum = 0;
  float sharePrice = 0.0;
  float rivCommission = 0.0;

  printf("Enter number of shares: ");
  scanf("%d", &shareNum);

  printf("Enter price per share: ");
  scanf("%f", &sharePrice);

  value = shareNum * sharePrice;

  if (value < 2500.00f) {
    origCommission = 30.00f + .017f * value;
    rivCommission = (shareNum < 2000 ? 33.03f : 33.02f) + .017f * value;
  }
  else if (value < 6250.00f) {
    origCommission = 56.00f + .0066f * value;
    rivCommission = (shareNum < 2000 ? 33.03f : 33.02f) + .0066f * value;
  }
  else if (value < 20000.00f) {
    origCommission = 76.00f + .0034f * value;
    rivCommission = (shareNum < 2000 ? 33.03f : 33.02f) + .0034f * value;
  }
  else if (value < 50000.00f) {
    origCommission = 100.00f + .0022f * value;
    rivCommission = (shareNum < 2000 ? 33.03f : 33.02f) + .0022f * value;
  }
  else if (value < 500000.00f) {
    origCommission = 155.00f + .0011f * value;
    rivCommission = (shareNum < 2000 ? 33.03f : 33.02f) + .0011f * value;
  }
  else {
    origCommission = 255.00f + .0009f * value;
    rivCommission = (shareNum < 2000 ? 33.03f : 33.02f) + .0009f * value;
  }

  if (origCommission < 39.00f)
    origCommission = 39.00f;

  printf("Value: $%.2f\n", value);
  printf("Original commission: $%.2f\n", origCommission);
  printf("Rival commission: $%.2f\n", rivCommission);

  return 0;
}
