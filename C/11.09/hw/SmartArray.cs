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
            this.lastIndex = this.ferstIndex + array.Length;
        }

        public int this[int index]
        {
            get
            {

                int tmpIndex = index - this.ferstIndex;
                return array[tmpIndex];
            }
            set
            {
                int tmpIndex = index - this.ferstIndex;
                array[tmpIndex] = value;
            }
        }

        public int LenArray
        {
            get { return array.Length; }
        }
        public int FerstIndex
        {
            get { return  ferstIndex; }
        }
        public int LastIndex
        {
            get { return lastIndex; }
        }

    }
}