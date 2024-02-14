int move_tool(int rotation_angle, int total_distance)
{
   int distance = 0;
   if (rotation_angle % 90 == 0)
   {
        distance = 5;
        total_distance += distance;
        return total_distance;
   }
   else 
   {
       distance = 0;
       return distance;
   }
}
