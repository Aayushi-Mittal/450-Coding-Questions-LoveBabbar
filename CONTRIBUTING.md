# How to Contribute :

## Steps for Contributing :

- Fork the repository to your own GitHub account and star if you like it.

- Clone the repository to your local machine

```
$ git clone "https://github.com/{username}/450-Coding-Questions-LoveBabbar.git"
$ cd 450-Coding-Questions-LoveBabbar
```
where username is your GitHub account username.

- Add Upstream to your repository.

```
$ git add remote upstream "https://github.com/Aayushi-Mittal/450-Coding-Questions-LoveBabbar.git"
```
where username is your GitHub account username.

- Create a branch where you can do your local work.
```
$ git branch {branchname}
$ git checkout branchname
```
- Do your work and stage your changes.
```
$ git add <filename>   //for adding particular files to the staging area
$ git add .           //for adding all the files to the staging area
```
- Commit you changes with a commit message containing your name, file(s) worked upon, changes added.
```
$ git commit -m "commit message"
```
- Push changes to your forked repository
```
$ git push -u origin branchname
```
- Create a pull request to the upstream repository.
