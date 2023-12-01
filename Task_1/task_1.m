function path=task_1(map, startPoint, stopPoint)
% Team - MSKN Decybel
% Author - Rafał Szygenda
% Użycie funkcji:
% Funkcja wykorzystuje multilayer map gdzie kolejne wartswy to:
% 1 - mapa z blokadami
% 2 - Mapa kosztu prędkości
% 3 - Mapa kosztu zatłoczenia ruchu
% 4 - Mapa kosztu przeszkód na drodze
% Punkty Start oraz Stop powinny zostać wygenerowane przez dostarczoną
% funkcję "startStopGenerator.m". 


% Zamiana 4 warstwowej mapy do zmiennych
environment_map=map(:,:,1);
speed_limit_cost_map=map(:,:,2);
trafic_intensity_map=map(:,:,3);
obstacles_map=map(:,:,4);

%Konwersja mapy do binaryOccupancy do użycia AStar
mapa_binarna=binaryOccupancyMap(~environment_map);

%Użycie path plannera

% Z racji minimalizacji funkcji f(n) = g(n) + H(n) dla astar, jedna z tych
% funkcji implementuje niestandardową funkcję kosztu ruchu, a druga zwraca
% zero, tak aby f(n) = custom_cost(n) 
planner = plannerAStarGrid(mapa_binarna,"GCostFcn",@(pose1,pose2) Custom_Gcost_function(pose1,pose2,speed_limit_cost_map,trafic_intensity_map,obstacles_map),'HCostFcn',@(pose1,pose2) Custom_Hcost_function(pose1,pose2));
[path, solution_info] = plan(planner, startPoint, stopPoint);
show(planner)
disp(['total custom cost (implemented function) = ' num2str(solution_info.PathCost) ])
end