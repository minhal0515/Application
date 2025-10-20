import React from 'react'
import { SignIn } from '@clerk/nextjs';

const SignInPage = () => {
  return (
    <main className='flex h-screen w-full items-center justify-center'>
      <SignIn/>
    </main>
  )
}


export default function Page() {
  return <SignIn path="/sign-in" routing="path" signUpUrl="/sign-up" />;
}
