DirList = dir(fullfile('.', '*.cc'));
listOfFiles = {DirList.name};
for j=1:length(listOfFiles)
    disp(listOfFiles(j));
    tmp = (listOfFiles(j));
    mex(tmp{1});
end