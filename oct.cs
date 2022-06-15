using System;

class oct {         
        static void Main(string[] args)
        {
                long seconds = (long)DateTime.UtcNow.Subtract(DateTime.UnixEpoch).TotalSeconds;
                long past = (long)seconds - 1633060800;
                long days = (long)past / 86400;
                Console.WriteLine("its october {0}", days);
        }
}
