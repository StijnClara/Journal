using System;

namespace MoneyMaker
{
  class MainClass
  {
    public static void Main(string[] args)
    {


      Console.WriteLine("Welcome to Money Maker!");
      Console.WriteLine("Enter an amount to convert to coins: ");
      string totalAsString = Console.ReadLine();
      double total = Convert.ToDouble(totalAsString);
      Console.WriteLine($"{total} cents is equal to...");

      int goldValue = 10;
      int silverValue = 5;
      

      double goldCoins = Math.Floor(total / goldValue);
      double leftOver = Math.Floor(total % goldValue);
      double silverCoins = Math.Floor(leftOver / silverValue);
      leftOver = Math.Floor(leftOver % silverValue);
      double bronzeCoins = Math.Floor(leftOver / 1);

      Console.WriteLine($"Than you get, {goldCoins} gold coins, {silverCoins} silver coins and {bronzeCoins} bronze coins.");
    }
  }
}
