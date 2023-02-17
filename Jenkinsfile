pipeline {

    agent any
        stages{
          stage('Build') {
            steps{
              sh 'g++ -o PES2UG20CS118 my_code.cpp'
            }
          }

          stage('Test') {
            steps{
               sh './PES2UG20CS118'
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
