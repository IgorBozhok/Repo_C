using System;


namespace CW1
{
     internal class SmartArray
    {
        private int[] array;
        int ferstIndex;
        int lastIndex;

        public SmartArray(int sizeArr, int ferstIndex)
        {
           if (sizeArr <= 0)
            {
                Console.WriteLine("Ошибка!! sizeArr <= 0 ");
            }
            this.ferstIndex = ferstIndex;
            
            array = new int[sizeArr];
            this.lastIndex = this.ferstIndex + array.Length-1;
        }
        public int this[int index]
        {
            get
            {

                int tmpIndex = lastIndex - index;
                return array[tmpIndex];
            }
            set
            {
                int tmpIndex = lastIndex - index;
                array[tmpIndex] = value;
            }
        }


    }
}
