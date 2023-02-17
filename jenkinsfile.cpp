pipeline {
    agent any

stages{
  stage('Build') {
    steps{
      sh 'g++ -o my_code my_code.cpp'
    }
  }

  stage('Test') {
    steps{
       sh './my_code'
    }
  }

  stage('Deploy') {
    steps{
      echo 'DEPLOYMENT SUCCESSFUL'
    }
  }
}
post {
    failure {
        echo 'Pipeline Failed'
    }
  }
}

