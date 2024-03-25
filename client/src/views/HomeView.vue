<script setup>
import { GoogleMap, Marker } from 'vue3-google-map'
import { env } from '../stores/env'

const apiKey = env.apiKey
const center = { lat: 37.242819, lng: 126.775207 }
</script>

<template>
  <main> 
    <div>
      <GoogleMap
      :api-key= apiKey
      style="width: 75%; height: 500px"
      :center="center"
      :zoom="17"
      >
      <Marker :options="{ position: center }" />
    </GoogleMap>
  </div>
  <div></div>
</main>
</template>

<style scoped>

</style>