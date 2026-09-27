namespace char_and_exception
{

    internal class Program
    {
        static void Main(string[] args)
        {
            bool loop = true;
            while (loop)
            {
            Console.Write("Enter Character: ");
            char y = Console.ReadKey().KeyChar;
                try
                {
                    if (y == '0' || y == '\0' || y == '\r' || y == '\n')
                    {
                        throw new Exception("\nKhaliee va 0 nemishe!!");
                    }
                    loop = false;
                    int x = (int)y;
                    Console.WriteLine("\nYour ASCII: " + x);

                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                }
            }

            Console.WriteLine("Good Bye");
        }

    }
}