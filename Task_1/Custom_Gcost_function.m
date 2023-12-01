function cost = Custom_Gcost_function(pos1,pos2,speed_map,traffic_map,obstacle_map)
%CUSTOM_GCOST_FUNCTION Summary of this function goes here
% Funkcja na podstawie punktow pomiedzy ruchem generuje nowy
% niestandardowyy koszt zdefiniowany w poleceniu
%   Detailed explanation goes here
% x2-x1 
% cost = SpeedLimitCost * Traffic + obstacle
pos1_x=pos1(2);
pos1_y=pos1(1);
pos2_x=pos2(2);
pos2_y=pos2(1);
%
temp_val_y = abs(pos1_y - pos2_y);
temp_val_x = abs(pos1_x - pos2_x);
if temp_val_y == 1 && temp_val_x == 1
    cost_temp = sqrt(2) * speed_map(pos2_y,pos2_x) * traffic_map(pos2_y,pos2_x) + obstacle_map(pos2_y,pos2_x);
else
    cost_temp = speed_map(pos2_y,pos2_x) * traffic_map(pos2_y,pos2_x) + obstacle_map(pos2_y,pos2_x);
end
cost = cast(cost_temp,'double');
end

